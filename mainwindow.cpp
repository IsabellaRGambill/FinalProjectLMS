#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "librarydialogue.h"
#include "bookmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connecting the Login button to button()
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(button()));

    //Adding color to the login button
    ui->pushButton->setStyleSheet("background-color: blue; color: white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::button()
{
    //Creating usernames and passwords
    QString name[]={"Isabella Gambill", "David Corsi", "Jesica Pirir"};
    QString pass[]={"IG123","DC123","JP123"};

    //Allowing user to input username and password
    QString uName = ui->lineEdit->text();
    QString uPass = ui->lineEdit_2->text();

    bool found = false;
    int length = sizeof(name)/sizeof(name[0]);

    //Creating Bookmanager to track books
    static BookManager *manager = new BookManager();


    //Checking the entered username and password against each preset entry
    for (int i=0; i<length;i++){
        // If user/pass exists in database, it welcomes the user
        if(uName==name[i] && uPass == pass[i]) {
            QMessageBox::information(this, "Welcome Message", "User: " + name[i] + "\n" "Welcome to Library System");
            found = true;
        // Then it opens the library system
            LibraryDialogue *libDialog = new LibraryDialogue(uName, manager, this);
            libDialog->exec(); // opens as a modal dialog
            break;
        }
        //If user/pass cant be found, it presents an error box.
        else if(!found && i == length - 1){
            QMessageBox::information(this, "Error Box", "Invalid username or password");
        }
    }
}

