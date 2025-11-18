#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);  //Constructor - Builds UI, connects buttons to functions, and prepares the window
    ~MainWindow();                          //Destructor - Deletes UI and cleans up memory

private slots:
    void button(); // Slot function called when the button is pressed

    void on_exitButton_clicked();

private:
    Ui::MainWindow *ui; // Pointer to the UI object
};
#endif // MAINWINDOW_H
