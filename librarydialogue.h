#ifndef LIBRARYDIALOGUE_H
#define LIBRARYDIALOGUE_H

#include <QDialog>
#include <QListWidget>
#include "bookmanager.h"


class LibraryDialogue : public QDialog
{
    Q_OBJECT
public:
    // Creates the window and loads books for the specific user
    explicit LibraryDialogue(QString username, BookManager *manager, QWidget *parent = nullptr);
private slots:
    void checkOutBook(); // For user to check out a book
    void checkInBook(); // For user to check in a book
private:
    QString currentUser; // Whos currently logged in
    BookManager *bookManager; // Shared bookmanager
    QListWidget *availableList; // List of available books
    QListWidget *checkedOutList; // List of checked out books

};

#endif // LIBRARYDIALOGUE_H
