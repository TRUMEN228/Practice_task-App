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
#include <QtWidgets/QStatusBar>
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
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(515, 337);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Ver1Btn = new QPushButton(centralwidget);
        Ver1Btn->setObjectName("Ver1Btn");
        Ver1Btn->setGeometry(QRect(380, 50, 111, 29));
        Ver1Path = new QLineEdit(centralwidget);
        Ver1Path->setObjectName("Ver1Path");
        Ver1Path->setGeometry(QRect(20, 50, 341, 28));
        Ver1Path->setEchoMode(QLineEdit::Normal);
        Ver1Label = new QLabel(centralwidget);
        Ver1Label->setObjectName("Ver1Label");
        Ver1Label->setGeometry(QRect(20, 20, 261, 20));
        Ver2Label = new QLabel(centralwidget);
        Ver2Label->setObjectName("Ver2Label");
        Ver2Label->setGeometry(QRect(20, 100, 301, 20));
        Ver2Path = new QLineEdit(centralwidget);
        Ver2Path->setObjectName("Ver2Path");
        Ver2Path->setGeometry(QRect(20, 130, 341, 28));
        Ver2Path->setEchoMode(QLineEdit::Normal);
        Ver2Btn = new QPushButton(centralwidget);
        Ver2Btn->setObjectName("Ver2Btn");
        Ver2Btn->setGeometry(QRect(380, 130, 111, 29));
        CreatePatchBtn = new QPushButton(centralwidget);
        CreatePatchBtn->setObjectName("CreatePatchBtn");
        CreatePatchBtn->setGeometry(QRect(20, 220, 141, 29));
        ApplyPatchBtn = new QPushButton(centralwidget);
        ApplyPatchBtn->setObjectName("ApplyPatchBtn");
        ApplyPatchBtn->setGeometry(QRect(190, 220, 141, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 260, 151, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 260, 321, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        label_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        Ver1Btn->raise();
        Ver1Path->raise();
        Ver1Label->raise();
        Ver2Label->raise();
        Ver2Path->raise();
        Ver2Btn->raise();
        ApplyPatchBtn->raise();
        CreatePatchBtn->raise();
        label->raise();
        label_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 515, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
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
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\202\321\207 \321\201\320\276\320\267\320\264\320\260\320\275 \320\277\320\276 \320\277\321\203\321\202\320\270:", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
