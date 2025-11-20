/********************************************************************************
** Form generated from reading UI file 'librarywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYWINDOW_H
#define UI_LIBRARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_libraryWindow
{
public:
    QLabel *pageLabel;
    QPushButton *exitLibButton;
    QLabel *titleLabel;
    QLabel *titleLabel_2;
    QLineEdit *titleLineEdit;
    QLineEdit *authorLineEdit;
    QPushButton *addButton;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *libraryWindow)
    {
        if (libraryWindow->objectName().isEmpty())
            libraryWindow->setObjectName("libraryWindow");
        libraryWindow->resize(657, 524);
        libraryWindow->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(33, 33, 33);\n"
"}"));
        pageLabel = new QLabel(libraryWindow);
        pageLabel->setObjectName("pageLabel");
        pageLabel->setGeometry(QRect(250, 40, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(28);
        pageLabel->setFont(font);
        pageLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        pageLabel->setScaledContents(false);
        exitLibButton = new QPushButton(libraryWindow);
        exitLibButton->setObjectName("exitLibButton");
        exitLibButton->setGeometry(QRect(450, 430, 161, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baskerville")});
        exitLibButton->setFont(font1);
        exitLibButton->setStyleSheet(QString::fromUtf8(""));
        titleLabel = new QLabel(libraryWindow);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(80, 120, 91, 21));
        titleLabel->setFont(font1);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(57, 83, 141);\n"
"color: rgb(255, 255, 255)\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        titleLabel_2 = new QLabel(libraryWindow);
        titleLabel_2->setObjectName("titleLabel_2");
        titleLabel_2->setGeometry(QRect(80, 160, 91, 21));
        titleLabel_2->setFont(font1);
        titleLabel_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(57, 83, 141);\n"
"color: rgb(255, 255, 255)\n"
"}"));
        titleLabel_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        titleLineEdit = new QLineEdit(libraryWindow);
        titleLineEdit->setObjectName("titleLineEdit");
        titleLineEdit->setGeometry(QRect(190, 120, 171, 21));
        authorLineEdit = new QLineEdit(libraryWindow);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(190, 160, 171, 21));
        addButton = new QPushButton(libraryWindow);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(80, 210, 100, 32));
        addButton->setFont(font1);
        addButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(57, 83, 141);\n"
"color: rgb(255, 255, 255)\n"
"}"));
        listWidget = new QListWidget(libraryWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(80, 280, 256, 192));
        listWidget->setFont(font1);
        label = new QLabel(libraryWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 260, 241, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baskerville")});
        font2.setPointSize(16);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(libraryWindow);

        QMetaObject::connectSlotsByName(libraryWindow);
    } // setupUi

    void retranslateUi(QDialog *libraryWindow)
    {
        libraryWindow->setWindowTitle(QCoreApplication::translate("libraryWindow", "Dialog", nullptr));
        pageLabel->setText(QCoreApplication::translate("libraryWindow", "Your Library", nullptr));
        exitLibButton->setText(QCoreApplication::translate("libraryWindow", "Exit Library", nullptr));
        titleLabel->setText(QCoreApplication::translate("libraryWindow", "Book Title", nullptr));
        titleLabel_2->setText(QCoreApplication::translate("libraryWindow", "Book Author", nullptr));
        addButton->setText(QCoreApplication::translate("libraryWindow", "Add Book", nullptr));
        label->setText(QCoreApplication::translate("libraryWindow", "List of Your Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class libraryWindow: public Ui_libraryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYWINDOW_H
