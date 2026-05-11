#include "parametresdialog.h"
#include "ui_parametresdialog.h"

ParametresDialog::ParametresDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParametresDialog)
{
    ui->setupUi(this);
}

ParametresDialog::~ParametresDialog()
{
    delete ui;
}
