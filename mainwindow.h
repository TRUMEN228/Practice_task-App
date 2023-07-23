#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Ver1Btn_clicked();
    void on_Ver2Btn_clicked();
    void on_CreatePatchBtn_clicked();
    void on_PatchingBtn_clicked();
    void on_PatchBtn_clicked();
    void on_ApplyPatchBtn_clicked();

    void on_ExitBtn_clicked();

private:
    Ui::MainWindow *ui;
    void CreatePatch();
    void ApplyPatch();
};
#endif // MAINWINDOW_H
