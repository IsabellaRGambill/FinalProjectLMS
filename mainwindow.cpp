#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

#include "librarydialogue.h"
#include "bookmanager.h"

#include "librarywindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connecting the Login button to button()
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(button()));

    //Adding color to the login button
    //ui->pushButton->setStyleSheet("background-color: ; color: white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Login Button opens library window & library dialogue
void MainWindow::button()
{
    libraryWindow libWinObj;
    libWinObj.setModal(true);

    //Create two Arr: usernames, passwords
    QString name[]={"Isabella Gambill", "David Corsi", "Jesica Pirir"};
    QString pass[]={"IG123","DC123","JP123"};

    //Creates and sets uName & uPass from user input
    QString uName = ui->lineEdit->text();
    QString uPass = ui->lineEdit_2->text();

    bool found = false;
    int length = sizeof(name)/sizeof(name[0]);

    //Creating Bookmanager to track books
    static BookManager *manager = new BookManager();


    //For Loop: checks two arrays to match a user & passwrd
    for (int i=0; i<length;i++){
        // If user/pass match, it welcomes the user
        if(uName==name[i] && uPass == pass[i]) {
            QMessageBox::information(this, "Welcome Message", "User: " + name[i] + "\n" "Welcome to Library System");
            found = true;

        //Now Library window & library dialogue exec
            LibraryDialogue *libDialog = new LibraryDialogue(uName, manager, this);
            libDialog->exec(); // opens check in-out

            libWinObj.exec(); //opens library window

            break;
        }
        else if(!found && i == length - 1){
            QMessageBox::information(this, "Error Box", "Invalid username or password");
        }
    }
}

//Exit Button: Closes Window
void MainWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Exit", "Are You Sure?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}



