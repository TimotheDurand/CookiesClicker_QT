#include "succesdialog.h"
#include "ui_succesdialog.h"

SuccesDialog::SuccesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuccesDialog)
{
    ui->setupUi(this);
}

SuccesDialog::~SuccesDialog()
{
    delete ui;
}
