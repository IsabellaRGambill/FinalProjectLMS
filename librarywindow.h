#ifndef LIBRARYWINDOW_H
#define LIBRARYWINDOW_H

#include <QDialog>

namespace Ui {
class libraryWindow;
}

class libraryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit libraryWindow(QWidget *parent = nullptr);
    ~libraryWindow();

private slots:

    void on_addButton_clicked();

    void on_exitLibButton_clicked();

private:
    Ui::libraryWindow *ui;
};

#endif // LIBRARYWINDOW_H
