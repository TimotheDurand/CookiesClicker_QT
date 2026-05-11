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
    int nb_cookies_total = cookies;
    int additionneur_cookies = 0;
    int multiplicateur_cookies = 0;

    int nb_mamie = 0;
    int prix_mamie = 10;
    int nb_boulangerie = 0;
    int prix_boulangerie = 1000;
    int nb_magazin = 0;
    int prix_magazin = 100000;
    int nb_usine = 0;
    int prix_usine = 10000000;

    QTimer *timer; // pour les cookies/seconde
};

#endif // MAINWINDOW_H
