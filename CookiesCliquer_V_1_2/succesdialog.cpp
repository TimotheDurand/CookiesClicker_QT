#include "succesdialog.h"
#include "ui_succesdialog.h"

SuccesDialog::SuccesDialog(int &nb_cookies_total, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuccesDialog),
    s_nb_cookies_total(nb_cookies_total)
{
    ui->setupUi(this);

    setWindowTitle("Succes");

    ui->labelNbCookiesTotal->setText(QString::number(s_nb_cookies_total));
}

SuccesDialog::~SuccesDialog()
{
    delete ui;
}
