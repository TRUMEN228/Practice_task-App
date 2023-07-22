#include "mainwindow.h"
#include "ui_mainwindow.h"
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

void MainWindow::on_Ver1Btn_clicked()
{
    QString ver1path = QFileDialog::getOpenFileName(0, "Выбрать файл", "C:\\");
    ui->Ver1Path->setText(ver1path);
}

void MainWindow::on_Ver2Btn_clicked()
{
    QString ver2path = QFileDialog::getOpenFileName(0, "Выбрать файл", "C:\\");
    ui->Ver2Path->setText(ver2path);
}

void MainWindow::on_CreatePatchBtn_clicked()
{
    if (ui->Ver1Path->text().isEmpty() || ui->Ver2Path->text().isEmpty()) {
        QMessageBox::warning(this, "Не задан путь к файлу", "Выберите файл или введите путь вручную");
        return;
    }

    else if (!QFile(ui->Ver1Path->text()).exists() || !QFile(ui->Ver2Path->text()).exists()){
        QMessageBox::warning(this, "Неверный путь", "Выберите существующий файл");
        return;
    }

    else {

    }
}

