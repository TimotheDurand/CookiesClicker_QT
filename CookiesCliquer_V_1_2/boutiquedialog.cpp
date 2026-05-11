#include "boutiquedialog.h"
#include "ui_boutiquedialog.h"

BoutiqueDialog::BoutiqueDialog(int &cookies, int &nb_mamie, int &nb_boulangerie,
                               int &nb_magazin, int &nb_usine, int &cookiesParSeconde,
                               int &prix_mamie, int &prix_boulangerie, int &prix_magazin,
                               int &prix_usine,
                               QTimer *timer, QWidget *parent)
    : QDialog(parent), ui(new Ui::BoutiqueDialog), m_cookies(cookies), m_nb_mamie(nb_mamie),
    m_nb_boulangerie(nb_boulangerie), m_nb_magazin(nb_magazin), m_nb_usine(nb_usine),
    m_cookiesParSeconde(cookiesParSeconde), m_prix_mamie(prix_mamie), m_prix_boulangerie(prix_boulangerie),
    m_prix_magazin(prix_magazin), m_prix_usine(prix_usine)
{
    ui->setupUi(this);
    setWindowTitle("Boutique");


    ui->labelSolde->setText(QString::number(m_cookies));
    ui->labelNbMamie->setText(QString::number(m_nb_mamie));
    ui->labelNbBoulangerie->setText(QString::number(m_nb_boulangerie));
    ui->labelNbMagazin->setText(QString::number(m_nb_magazin));
    ui->labelNbUsine->setText(QString::number(m_nb_usine));

    ui->labelPrixMamie->setText((QString::number(m_prix_mamie)));
    ui->labelPrixBoulangerie->setText((QString::number(m_prix_boulangerie)));
    ui->labelPrixMagazin->setText((QString::number(m_prix_magazin)));
    ui->labelPrixUsine->setText((QString::number(m_prix_usine)));

    connect(timer, &QTimer::timeout, this, &BoutiqueDialog::onTimeout);
}

BoutiqueDialog::~BoutiqueDialog()
{
    delete ui;
}

// rafraichir le solde
void BoutiqueDialog::onTimeout()
{
    ui->labelSolde->setText(QString::number(m_cookies));
}

// bouton mamie
void BoutiqueDialog::on_pushButtonMamie_clicked()
{
    if (m_cookies >= m_prix_mamie)
    {
        m_cookies -= m_prix_mamie;
        m_nb_mamie++;
        m_prix_mamie *= 2;
        m_cookiesParSeconde += 1;
        ui->labelSolde->setText(QString::number(m_cookies));
        ui->labelNbMamie->setText("x " + QString::number(m_nb_mamie));
        ui->labelPrixMamie->setText(QString::number(m_prix_mamie));
    }
    else
    {
        ui->labelSolde->setText("Pas assez de cookies !");
    }
}
// bouton boulangerie
void BoutiqueDialog::on_pushButtonBoulangerie_clicked()
{
    if (m_cookies >= m_prix_boulangerie)
    {
        m_cookies -= m_prix_boulangerie;
        m_nb_boulangerie++;
        m_prix_boulangerie *= 2;
        m_cookiesParSeconde += 10;
        ui->labelSolde->setText(QString::number(m_cookies));
        ui->labelNbBoulangerie->setText("x " + QString::number(m_nb_boulangerie));
        ui->labelPrixBoulangerie->setText(QString::number(m_prix_boulangerie));
    }
    else
    {
        ui->labelSolde->setText("Pas assez de cookies !");
    }
}
// bouton magazin
void BoutiqueDialog::on_pushButtonMagazin_clicked()
{
    if (m_cookies >= m_prix_magazin)
    {
        m_cookies -= m_prix_magazin;
        m_nb_magazin++;
        m_prix_magazin *= 2;
        m_cookiesParSeconde += 100;
        ui->labelSolde->setText(QString::number(m_cookies));
        ui->labelNbMagazin->setText("x " + QString::number(m_nb_magazin));
        ui->labelPrixMagazin->setText(QString::number(m_prix_magazin));
    }
    else
    {
        ui->labelSolde->setText("Pas assez de cookies !");
    }
}
// bouton usine
void BoutiqueDialog::on_pushButtonUsine_clicked()
{
    if (m_cookies >= m_prix_usine)
    {
        m_cookies -= m_prix_usine;
        m_nb_usine++;
        m_prix_usine *= 2;
        m_cookiesParSeconde += 1000;
        ui->labelSolde->setText(QString::number(m_cookies));
        ui->labelNbUsine->setText("x " + QString::number(m_nb_usine));
        ui->labelPrixUsine->setText(QString::number(m_prix_usine));
    }
    else
    {
        ui->labelSolde->setText("Pas assez de cookies !");
    }
}

