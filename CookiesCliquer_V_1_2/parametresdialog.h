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
    explicit ParametresDialog(int &additionneur_cookies, int &multiplicateur_cookies
                              ,QWidget *parent = nullptr);
    ~ParametresDialog();

private:
    Ui::ParametresDialog *ui;

    int p_additonneur_cookies;
    int p_multiplicateur_cookies;
};

#endif // PARAMETRESDIALOG_H
