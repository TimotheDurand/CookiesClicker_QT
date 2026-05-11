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

    // Démarrer sur la page Accueil (index 0)
    ui->stackedWidget->setCurrentIndex(0);

    // Bouton "Jouer" → aller sur la page Jeu
    connect(ui->boutonJouer, &QPushButton::clicked,
            this, [this]() {
        ui->stackedWidget->setCurrentIndex(1);
    });

    // Bouton "Quitter" → retour Accueil
    connect(ui->boutonQuitter, &QPushButton::clicked,
            this, [this]() {
        ui->stackedWidget->setCurrentIndex(0);
    });

    // Clic sur le cookie → +1 cookie
    connect(ui->boutonCookie, &QPushButton::clicked,
            this, [this]() {
        cookies++;
        ui->labelScore->setText(
            QString::number(cookies) + " cookies");
    });

    // Timer : ajoute cookiesParSeconde toutes les secondes
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this]() {
        cookies += cookiesParSeconde;
        ui->labelScore->setText(
            QString::number(cookies) + " cookies");
    });
    timer->start(1000); // toutes les 1000ms = 1 seconde

    // Bouton Boutique
    connect(ui->boutonBoutique, &QPushButton::clicked, this, [this]()
    {
        BoutiqueDialog dialog(cookies, nb_mamie, nb_boulangerie, nb_magazin, nb_usine, cookiesParSeconde, this);
        dialog.exec();

        ui->labelScore->setText(QString::number(cookies) + " cookies");
    });

    // Bouton Succès
    connect(ui->boutonSucces, &QPushButton::clicked,
            this, [this]() {
        SuccesDialog dialog(this);
        dialog.exec();
    });

    // Bouton Paramètres
    connect(ui->boutonParametres, &QPushButton::clicked,
            this, [this]() {
        ParametresDialog dialog(this);
        dialog.exec();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
