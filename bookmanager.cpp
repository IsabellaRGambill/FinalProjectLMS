#include "bookmanager.h"

BookManager::BookManager() {
    // All the books that the library owns
    allBooks = {"How to Kill a Mockingjay", "Ender's Game", "1984", "This is Where it Ends", "The Darkest Minds"};
}
QStringList BookManager::availableBooks() {
    // Start with all books available
    QStringList result = allBooks;

    // Then remove the books that the user has checked out
    for(const QStringList &userList : checkedOut.values()){
        for (const QString &book : userList) {
            result.removeAll(book);
        }
    }
    return result;
}
QStringList BookManager::userBooks(const QString &user) {// Returns books for a specific user
    return checkedOut.value(user);
}
void BookManager::checkOut(const QString &user, const QString &book) { // If not already checked out, it adds a book to the users list
    if (!checkedOut[user].contains(book)){
        checkedOut[user].append(book);
    }
}
void BookManager::checkIn(const QString &user, const QString &book) {// Removes book from the user
    checkedOut[user].removeAll(book);
}
void BookManager::setAvailableBooks(const QStringList &books){
    allBooks = books;
}
void BookManager::setUserBooks(const QString &user, const QStringList &books){
    checkedOut[user] = books;
}
