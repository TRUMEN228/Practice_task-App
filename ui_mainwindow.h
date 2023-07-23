/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Ver1Btn;
    QLineEdit *Ver1Path;
    QLabel *Ver1Label;
    QLabel *Ver2Label;
    QLineEdit *Ver2Path;
    QPushButton *Ver2Btn;
    QPushButton *CreatePatchBtn;
    QPushButton *ApplyPatchBtn;
    QLabel *PatchPathLabel;
    QLabel *PatchPathPath;
    QLineEdit *PatchingPath;
    QPushButton *PatchingBtn;
    QLabel *PatchingLabel;
    QLabel *PatchLabel;
    QLineEdit *PatchPath;
    QPushButton *PatchBtn;
    QLabel *CreatePatchLabel;
    QLabel *ApplyPatchLabel;
    QPushButton *ExitBtn;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(512, 580);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Ver1Btn = new QPushButton(centralwidget);
        Ver1Btn->setObjectName("Ver1Btn");
        Ver1Btn->setGeometry(QRect(380, 80, 111, 29));
        Ver1Path = new QLineEdit(centralwidget);
        Ver1Path->setObjectName("Ver1Path");
        Ver1Path->setGeometry(QRect(20, 80, 341, 28));
        Ver1Path->setEchoMode(QLineEdit::Normal);
        Ver1Label = new QLabel(centralwidget);
        Ver1Label->setObjectName("Ver1Label");
        Ver1Label->setGeometry(QRect(20, 50, 261, 20));
        Ver2Label = new QLabel(centralwidget);
        Ver2Label->setObjectName("Ver2Label");
        Ver2Label->setGeometry(QRect(20, 130, 301, 20));
        Ver2Path = new QLineEdit(centralwidget);
        Ver2Path->setObjectName("Ver2Path");
        Ver2Path->setGeometry(QRect(20, 160, 341, 28));
        Ver2Path->setEchoMode(QLineEdit::Normal);
        Ver2Btn = new QPushButton(centralwidget);
        Ver2Btn->setObjectName("Ver2Btn");
        Ver2Btn->setGeometry(QRect(380, 160, 111, 29));
        CreatePatchBtn = new QPushButton(centralwidget);
        CreatePatchBtn->setObjectName("CreatePatchBtn");
        CreatePatchBtn->setGeometry(QRect(20, 210, 141, 29));
        ApplyPatchBtn = new QPushButton(centralwidget);
        ApplyPatchBtn->setObjectName("ApplyPatchBtn");
        ApplyPatchBtn->setGeometry(QRect(20, 510, 141, 29));
        PatchPathLabel = new QLabel(centralwidget);
        PatchPathLabel->setObjectName("PatchPathLabel");
        PatchPathLabel->setEnabled(true);
        PatchPathLabel->setGeometry(QRect(20, 250, 151, 20));
        PatchPathPath = new QLabel(centralwidget);
        PatchPathPath->setObjectName("PatchPathPath");
        PatchPathPath->setGeometry(QRect(170, 250, 321, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        PatchPathPath->setFont(font);
        PatchingPath = new QLineEdit(centralwidget);
        PatchingPath->setObjectName("PatchingPath");
        PatchingPath->setGeometry(QRect(20, 380, 341, 28));
        PatchingPath->setEchoMode(QLineEdit::Normal);
        PatchingBtn = new QPushButton(centralwidget);
        PatchingBtn->setObjectName("PatchingBtn");
        PatchingBtn->setGeometry(QRect(380, 380, 111, 29));
        PatchingLabel = new QLabel(centralwidget);
        PatchingLabel->setObjectName("PatchingLabel");
        PatchingLabel->setGeometry(QRect(20, 350, 301, 20));
        PatchLabel = new QLabel(centralwidget);
        PatchLabel->setObjectName("PatchLabel");
        PatchLabel->setGeometry(QRect(20, 430, 301, 20));
        PatchPath = new QLineEdit(centralwidget);
        PatchPath->setObjectName("PatchPath");
        PatchPath->setGeometry(QRect(20, 460, 341, 28));
        PatchPath->setEchoMode(QLineEdit::Normal);
        PatchBtn = new QPushButton(centralwidget);
        PatchBtn->setObjectName("PatchBtn");
        PatchBtn->setGeometry(QRect(380, 460, 111, 29));
        CreatePatchLabel = new QLabel(centralwidget);
        CreatePatchLabel->setObjectName("CreatePatchLabel");
        CreatePatchLabel->setGeometry(QRect(20, 10, 161, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        CreatePatchLabel->setFont(font1);
        ApplyPatchLabel = new QLabel(centralwidget);
        ApplyPatchLabel->setObjectName("ApplyPatchLabel");
        ApplyPatchLabel->setGeometry(QRect(20, 310, 191, 20));
        ApplyPatchLabel->setFont(font1);
        ExitBtn = new QPushButton(centralwidget);
        ExitBtn->setObjectName("ExitBtn");
        ExitBtn->setGeometry(QRect(410, 510, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        Ver1Btn->raise();
        Ver1Path->raise();
        Ver1Label->raise();
        Ver2Label->raise();
        Ver2Path->raise();
        Ver2Btn->raise();
        ApplyPatchBtn->raise();
        CreatePatchBtn->raise();
        PatchPathLabel->raise();
        PatchPathPath->raise();
        PatchingPath->raise();
        PatchingBtn->raise();
        PatchingLabel->raise();
        PatchLabel->raise();
        PatchPath->raise();
        PatchBtn->raise();
        CreatePatchLabel->raise();
        ApplyPatchLabel->raise();
        ExitBtn->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 512, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "File Patcher", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        Ver1Btn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        Ver1Path->setText(QString());
        Ver1Label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        Ver2Label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\274\320\276\320\264\320\270\321\204\320\270\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        Ver2Path->setText(QString());
        Ver2Btn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        CreatePatchBtn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\260\321\202\321\207", nullptr));
        ApplyPatchBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\202\321\207", nullptr));
        PatchPathLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\202\321\207 \321\201\320\276\320\267\320\264\320\260\320\275 \320\277\320\276 \320\277\321\203\321\202\320\270:", nullptr));
        PatchPathPath->setText(QString());
        PatchingPath->setText(QString());
        PatchingBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        PatchingLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\274\320\276\320\264\320\270\321\204\320\270\321\206\320\270\321\200\321\203\320\265\320\274\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        PatchLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\277\320\260\321\202\321\207-\321\204\320\260\320\271\320\273\320\260:", nullptr));
        PatchPath->setText(QString());
        PatchBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        CreatePatchLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\277\320\260\321\202\321\207\320\260", nullptr));
        ApplyPatchLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\277\320\260\321\202\321\207\320\260", nullptr));
        ExitBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
