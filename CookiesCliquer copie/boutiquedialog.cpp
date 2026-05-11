#include "boutiquedialog.h"
#include "ui_boutiquedialog.h"

BoutiqueDialog::BoutiqueDialog(int &cookies, int &nb_mamie, int &nb_boulangerie,
                               int &nb_magazin, int &nb_usine,
                               int&cookiesParSeconde, QWidget *parent)
    : QDialog(parent), ui(new Ui::BoutiqueDialog), m_cookies(cookies), m_nb_mamie(nb_mamie),
      m_nb_boulangerie(nb_boulangerie), m_nb_magazin(nb_magazin), m_nb_usine(nb_usine)
    , m_cookiesParSeconde(cookiesParSeconde)
{
    ui->setupUi(this);

    ui->labelSolde->setText(QString::number(m_cookies));
    ui->labelNbMamie->setText(QString::number(m_nb_mamie));
    ui->labelNbBoulangerie->setText(QString::number(m_nb_boulangerie));
    ui->labelNbMagazin->setText(QString::number(m_nb_magazin));
    ui->labelNbUsine->setText(QString::number(m_nb_usine));
}

BoutiqueDialog::~BoutiqueDialog()
{
    delete ui;
}

void BoutiqueDialog::on_pushButtonMamie_clicked()
{
    int prix = 10;

    if (m_cookies >= prix)
    {
        m_cookies -= prix;
        m_nb_mamie++;
        m_cookiesParSeconde += 1;
        ui->labelSolde->setText(QString::number(m_cookies));
        ui->labelNbMamie->setText(QString::number(m_nb_mamie));
    }
    else
    {
        ui->labelSolde->setText("Pas assez de cookies !");
    }
}
