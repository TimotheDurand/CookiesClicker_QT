#ifndef PARAMETRESDIALOG_H
#define PARAMETRESDIALOG_H

#include <QDialog>

namespace Ui {
class ParametresDialog;
}

class ParametresDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ParametresDialog(QWidget *parent = nullptr);
    ~ParametresDialog();

private:
    Ui::ParametresDialog *ui;
};

#endif // PARAMETRESDIALOG_H
