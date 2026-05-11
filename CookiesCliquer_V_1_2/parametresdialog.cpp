#include "parametresdialog.h"
#include "ui_parametresdialog.h"

ParametresDialog::ParametresDialog(int &additionneur_cookies, int &multiplicateur_cookis,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParametresDialog),
    p_additonneur_cookies(additionneur_cookies),
    p_multiplicateur_cookies(multiplicateur_cookis)
{
    ui->setupUi(this);

    setWindowTitle("Parametres");

    ui->labelNbAdditionneur->setText(QString::number(p_additonneur_cookies));
    ui->labelNbMultiplicateur->setText(QString::number(p_multiplicateur_cookies));
}

ParametresDialog::~ParametresDialog()
{
    delete ui;
}
