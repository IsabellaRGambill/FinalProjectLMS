/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1198, 690);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 80, 481, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bangla MN")});
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 200, 131, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baskerville")});
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 280, 131, 71));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(450, 220, 321, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font-size:20px;\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(450, 300, 321, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font-size:20px;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 370, 161, 81));
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButtom{\n"
"color: white;\n"
"font-size: 20px;\n"
"}"));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(590, 370, 161, 81));
        exitButton->setFont(font1);
        exitButton->setAutoFillBackground(false);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButtom{\n"
"background-color: rgb(4, 51, 255);\n"
"font-size: 20px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1198, 24));
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
        label->setText(QCoreApplication::translate("MainWindow", "Login Management System", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
