#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H

#include <QString>
#include <QStringList>
#include <QMap>
class BookManager
{
public:
    BookManager();

    QStringList availableBooks();
    QStringList userBooks(const QString &user);

    void checkOut(const QString &user, const QString &book);
    void checkIn(const QString &user, const QString &book);
    void setAvailableBooks(const QStringList &books);
    void setUserBooks(const QString &user, const QStringList &books);

private:
    QStringList allBooks;
    QMap<QString, QStringList> checkedOut;
};

#endif // BOOKMANAGER_H
