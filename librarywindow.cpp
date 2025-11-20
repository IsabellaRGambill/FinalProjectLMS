#include "librarywindow.h"
#include "ui_librarywindow.h"


#include "mainwindow.h"
#include "librarydialogue.h"
#include "bookmanager.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>


libraryWindow::libraryWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::libraryWindow)
{
    ui->setupUi(this);
}

libraryWindow::~libraryWindow()
{
    delete ui;
}


//Adding Book Button
void libraryWindow::on_addButton_clicked()
{
    //Gets inputs
    QString newTitle = ui->titleLineEdit->text();
    QString newAuthor = ui->authorLineEdit->text();


    //If Loop: no empty author or title
    if (newTitle.isEmpty() || newAuthor.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "<font color ='red'> Please enter both a title and an author. </font>");
        return;
    }
    ui->listWidget->addItem("Title: "+ newTitle + "   By: " + newAuthor);

}

//Exiting the Library Window
void libraryWindow::on_exitLibButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Exit","<font color='white'>Are You Sure?</font>", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

