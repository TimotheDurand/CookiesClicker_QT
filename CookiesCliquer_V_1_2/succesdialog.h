#ifndef SUCCESDIALOG_H
#define SUCCESDIALOG_H

#include <QDialog>

namespace Ui {
class SuccesDialog;
}

class SuccesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SuccesDialog(int &nb_cookies_total, QWidget *parent = nullptr);
    ~SuccesDialog();

private:
    Ui::SuccesDialog *ui;

    int &s_nb_cookies_total;
};

#endif // SUCCESDIALOG_H
