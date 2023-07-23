#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <fstream>
#include <string>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

const int CHUNK = 100;

struct PatchModel
{
    uint8_t key;
    int mem = 0;
    std::vector<char> data;
};

void CreatePatch(const QString& Qver1Path, const QString& Qver2Path, const QString& QpatchPath) {
    std::string ver1Path = Qver1Path.toStdString();
    std::string ver2Path = Qver2Path.toStdString();
    std::string patchPath = QpatchPath.toStdString();

    std::ifstream ver1File(ver1Path, std::ios::binary);
    std::ifstream ver2File(ver2Path, std::ios::binary);
    std::ofstream patchFile(patchPath, std::ios::binary);

    int buf_size = CHUNK;

    int ver1Size = (int)ver1File.seekg(0, std::ios::end).tellg();
    int ver2Size = (int)ver2File.seekg(0, std::ios::end).tellg();

    int ver1Lim = ver1Size - CHUNK;

    std::vector<char> ver1Buf(CHUNK);
    std::vector<char> ver2Buf(CHUNK);

    std::vector<char> ver2Mismatch(1);

    int ver1Shift = 0;
    int ver2Shift = 0;

    std::vector<PatchModel> patchData;

    std::vector<char> data;

    bool match = false;
    bool last = false;

    while (ver2Shift <= ver2Size) {
        ver2File.seekg(ver2Shift, std::ios::beg);
        ver2File.read(ver2Buf.data(), buf_size);

        ver1Shift = 0;

        while (ver1Shift <= ver1Lim) {
            ver1File.seekg(ver1Shift, std::ios::beg);
            ver1File.read(ver1Buf.data(), buf_size);

            if (ver1Buf != ver2Buf) {
                match = false;
                ver1Shift++;
                continue;
            }

            else if (ver1Buf == ver2Buf) {
                match = true;
                break;
            }
        }

        PatchModel patchBuf;

        if (!match && !last) {
            ver2File.seekg(ver2Shift, std::ios::beg);
            ver2File.read(ver2Mismatch.data(), 1);
            data.insert(data.end(), ver2Mismatch.begin(), ver2Mismatch.end());
            ver2Shift++;
        }

        else if (match && !last) {
            if (!data.empty()) {
                patchBuf.key = 0;
                patchBuf.mem = data.size();
                patchBuf.data = data;
                patchData.push_back(patchBuf);
                data.clear();
            }

            patchBuf.key = 1;
            patchBuf.mem = ver1Shift;
            patchBuf.data = {};
            patchBuf.data.resize(0);
            patchData.push_back(patchBuf);

            ver2Shift += CHUNK;

            if (ver2Size - ver2Shift < CHUNK && ver2Size - ver2Shift > 0) {
                buf_size = ver2Size - ver2Shift;
                last = true;
            }
        }

        if (last) {
            ver2File.seekg(ver2Shift, std::ios::beg);
            ver2Buf = std::vector<char>(buf_size);
            ver2File.read(ver2Buf.data(), buf_size);
            patchBuf.key = 0;
            patchBuf.mem = buf_size;
            patchBuf.data = ver2Buf;
            patchData.push_back(patchBuf);
            break;
        }
    }

    for (const PatchModel& data : patchData) {
        patchFile.write(reinterpret_cast<const char*>(&data.key), sizeof(uint8_t));
        patchFile.write(reinterpret_cast<const char*>(&data.mem), sizeof(int));
        patchFile.write(data.data.data(), data.data.size());
    }

    ver1File.close();
    ver2File.close();
    patchFile.close();

    return;
}

void ApplyPatch (const QString& Qver1Path, const QString& QpatchPath, const QString& QpatchedPath) {
    std::string ver1Path = Qver1Path.toStdString();
    std::string patchPath = QpatchPath.toStdString();
    std::string patchedPath = QpatchedPath.toStdString();

    std::ifstream ver1File(ver1Path, std::ios::binary);
    std::ifstream patchFile(patchPath, std::ios::binary);
    std::ofstream patchedFile(patchedPath, std::ios::binary);

    std::vector<char> patchBuf;
    std::vector<char> patchData;

    int patchSize = (int)patchFile.seekg(0, std::ios::end).tellg() - 5;

    int patchShift = 0;
    patchFile.seekg(0, std::ios::beg);

    while (patchShift <= patchSize) {
        PatchModel patchInfo;

        patchFile.seekg(patchShift, std::ios::beg);
        patchFile.read(reinterpret_cast<char*>(&patchInfo.key), 1);
        patchFile.read(reinterpret_cast<char*>(&patchInfo.mem), 4);
        patchShift += 5;

        if (patchInfo.key == 1) {
            ver1File.seekg(patchInfo.mem, std::ios::beg);
            patchBuf = std::vector<char>(CHUNK);
            ver1File.read(patchBuf.data(), CHUNK);
        }

        else if (patchInfo.key == 0) {
            patchBuf = std::vector<char>(patchInfo.mem);
            patchFile.read(patchBuf.data(), patchInfo.mem);
            patchShift += patchInfo.mem;
        }

        patchData.insert(patchData.end(), patchBuf.begin(), patchBuf.end());
    }

    patchedFile.write(patchData.data(), patchData.size());

    ver1File.close();
    patchFile.close();
    patchedFile.close();

    return;
}

void MainWindow::on_Ver1Btn_clicked()
{
    QString ver1path = QFileDialog::getOpenFileName(0, "Выберите файл", "C:\\");
    ui->Ver1Path->setText(ver1path);
}

void MainWindow::on_Ver2Btn_clicked()
{
    QString ver2path = QFileDialog::getOpenFileName(0, "Выберите файл", "C:\\");
    ui->Ver2Path->setText(ver2path);
}

void MainWindow::on_PatchingBtn_clicked()
{
    QString patchingpath = QFileDialog::getOpenFileName(0, "Выберите файл", "C:\\");
    ui->PatchingPath->setText(patchingpath);
}

void MainWindow::on_PatchBtn_clicked()
{
    QString patchpath = QFileDialog::getOpenFileName(0, "Выберите файл", "C:\\");
    ui->PatchPath->setText(patchpath);
}

// *************************************************************************************** //

void MainWindow::on_CreatePatchBtn_clicked()
{
    if (ui->Ver1Path->text().isEmpty() || ui->Ver2Path->text().isEmpty()) {
        QMessageBox::warning(this, "Отсутствует путь к файлам", "Выберите путь к файлам или введите вручную");
        return;
    }

    else if (!QFile(ui->Ver1Path->text()).exists() || !QFile(ui->Ver2Path->text()).exists()){
        QMessageBox::warning(this, "Неверный путь", "Выберите действительный путь к файлам");
        return;
    }

    else {
        QString patchpath = QFileDialog::getSaveFileName(0, "Сохранение патч-файла", "C:\\");
        ::CreatePatch(ui->Ver1Path->text(), ui->Ver2Path->text(), patchpath);
        ui->PatchPathPath->setText(patchpath);
        QMessageBox::information(this, "Выполнено успешно", "Патч-файл создан успешно");
    }
}

void MainWindow::on_ApplyPatchBtn_clicked()
{
    if (ui->PatchingPath->text().isEmpty() || ui->PatchPath->text().isEmpty()) {
        QMessageBox::warning(this, "Отсутствует путь к файлам", "Выберите путь к файлам или введите вручную");
        return;
    }

    else if (!QFile(ui->PatchingPath->text()).exists() || !QFile(ui->PatchPath->text()).exists()) {
        QMessageBox::warning(this, "Неверный путь", "Выберите действительный путь к файлам");
        return;
    }

    else {
        QString patchedpath = QFileDialog::getSaveFileName(0, "Сохранение модифицированного файла", "C:\\");
        ::ApplyPatch(ui->PatchingPath->text(), ui->PatchPath->text(), patchedpath);
        QMessageBox::information(this, "Выполнено успешно", "Патч применён успешно");
    }
}


void MainWindow::on_ExitBtn_clicked()
{
    QMessageBox::StandardButton question = QMessageBox::question(this, "Подтверждение выхода", "Вы действительно хотите выйти?", QMessageBox::Yes | QMessageBox::No);
    if (question == QMessageBox::Yes) {
        QApplication::quit();
    }
}

