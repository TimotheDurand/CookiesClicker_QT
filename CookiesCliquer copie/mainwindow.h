#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    int cookies = 0;
    int cookiesParSeconde = 0;

    int nb_mamie = 0;
    int nb_boulangerie = 0;
    int nb_magazin = 0;
    int nb_usine = 0;

    QTimer *timer;          // pour les cookies/seconde
};

#endif // MAINWINDOW_H
