#include "librarydialogue.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

LibraryDialogue::LibraryDialogue(QString username, BookManager *manager, QWidget *parent)
    : QDialog(parent), currentUser(username), bookManager(manager)
{
    // Window Title
    setWindowTitle("Library System - " + username);

    // Lists for available/checked out books
    availableList = new QListWidget(this);
    checkedOutList = new QListWidget(this);

    // Populate books
    availableList->addItems(bookManager->availableBooks());
    checkedOutList->addItems(bookManager->userBooks(username));

    //Setting buttons
    QPushButton *checkOutbtn = new QPushButton("Check Out", this);
    QPushButton *checkInbtn = new QPushButton("Check In", this);

    //Layout Setup - building the UI in code rather than using the designer
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout -> addWidget(new QLabel("Available Books: "));
    layout -> addWidget(availableList);
    layout -> addWidget(checkOutbtn);
    layout -> addWidget(new QLabel("Checked Out Books: "));
    layout -> addWidget(checkedOutList);
    layout -> addWidget(checkInbtn);

    //connecting the buttons to actions to make them work
    connect(checkOutbtn, &QPushButton::clicked, this, &LibraryDialogue::checkOutBook);
    connect(checkInbtn, &QPushButton::clicked, this, &LibraryDialogue::checkInBook);
}
void LibraryDialogue::checkOutBook() {
    int row = availableList->currentRow();


    if (row >= 0) {
        // Removing the item from the available books list
        QListWidgetItem *item = availableList->takeItem(row);
        QString book = item->text();

        // Updating the manager data
        QStringList available = bookManager->availableBooks();
        QStringList userList = bookManager->userBooks(currentUser);


        available.removeOne(book); //Making the book no longer available (removing from list)
        if(!userList.contains(book)) { // Preventing duplicated from forming. "If book is already there, dont add it again."
            userList.append(book); // Adding the book to the 'checked out by user' list
        }

        //Saving changes
        bookManager->setAvailableBooks(available);
        bookManager->setUserBooks(currentUser, userList);

        //Adds item to checked out list on GUI
        checkedOutList->addItem(book);
        delete item;
    }
       //Making sure the user selects a book before pressing check out
    if (row < 0) {
        QMessageBox::warning(this, "Error", "Please select a book to check in.");
        return; }

}

void LibraryDialogue::checkInBook() {
    int row = checkedOutList->currentRow();
    if (row >= 0) {

        //Removing selected checked out book from list
        QListWidgetItem *item = checkedOutList->takeItem(row);
        QString book = item->text();

        // Updates lists
        QStringList available = bookManager->availableBooks();
        QStringList userList = bookManager->userBooks(currentUser);

        userList.removeOne(book); // Removes the book from the checked out list
        if(!available.contains(book)) { // Prevents duplicates
            available.append(book); // Adds book to the available list
        }

        // Saves
        bookManager->setAvailableBooks(available);
        bookManager->setUserBooks(currentUser, userList);

        // Adds item to list on GUI
        availableList->addItem(book);
        delete item;
    }
    //Making sure the user selects a book
    if (row < 0) {
        QMessageBox::warning(this, "Error", "Please select a book to check in.");
        return; }

}
