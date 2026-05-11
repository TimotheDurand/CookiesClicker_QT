#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "boutiquedialog.h"
#include "succesdialog.h"
#include "parametresdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Cookies Clickers");

    // Démarrer sur la page Accueil (index 0)
    ui->stackedWidget->setCurrentIndex(0);

    // Bouton "Jouer" aller sur la page Jeu
    connect(ui->boutonJouer, &QPushButton::clicked, this, [this]()
    {
        ui->stackedWidget->setCurrentIndex(1);
    });

    // Bouton "Quitter" retour Accueil
    connect(ui->boutonQuitter, &QPushButton::clicked, this, [this]()
    {
        ui->stackedWidget->setCurrentIndex(0);
    });

    // Clic sur le cookie +1 cookie
    connect(ui->boutonCookie, &QPushButton::clicked, this, [this]()
    {
        cookies += (1 + additionneur_cookies);
        additionneur_cookies = cookies / 100;
        ui->labelScore->setText(
        QString::number(cookies) + " cookies");
    });

    // Timer : ajoute cookiesParSeconde toutes les secondes
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this]()
    {
        cookies += cookiesParSeconde;
        nb_cookies_total = cookies;
        additionneur_cookies = cookies / 100;
        ui->labelScore->setText(QString::number(cookies) + " cookies");
    });
    timer->start(1000);

    // Bouton Boutique
    connect(ui->boutonBoutique, &QPushButton::clicked, this, [this]()
    {
        BoutiqueDialog dialog(cookies, nb_mamie, nb_boulangerie, nb_magazin,
                              nb_usine, cookiesParSeconde, prix_mamie, prix_boulangerie,
                              prix_magazin, prix_usine, timer, this);
        dialog.exec();

        ui->labelScore->setText(QString::number(cookies) + " cookies");
    });

    // Bouton Succès
    connect(ui->boutonSucces, &QPushButton::clicked, this, [this]()
    {
        SuccesDialog dialog(nb_cookies_total, this);
        dialog.exec();

        ui->labelScore->setText(QString::number(cookies) + " cookies");
    });

    // Bouton Paramètres
    connect(ui->boutonParametres, &QPushButton::clicked, this, [this]()
    {
        ParametresDialog dialog(additionneur_cookies, multiplicateur_cookies,this);
        dialog.exec();

        ui->labelScore->setText(QString::number(cookies) + " cookies");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
