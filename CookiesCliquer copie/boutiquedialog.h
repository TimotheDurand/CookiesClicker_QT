#ifndef BOUTIQUEDIALOG_H
#define BOUTIQUEDIALOG_H

#include <QDialog>

namespace Ui {
class BoutiqueDialog;
}

class BoutiqueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BoutiqueDialog(int &cookies, int &nb_mamie, int &nb_boulangerie,
                            int &nb_magazin, int &nb_usine, int&cookiesParSeconde,
                            QWidget *parent = nullptr);
    ~BoutiqueDialog();

private slots:


    void on_pushButtonMamie_clicked();

private:
    Ui::BoutiqueDialog *ui;

    int &m_cookies;
    int &m_nb_mamie;
    int &m_nb_boulangerie;
    int &m_nb_magazin;
    int &m_nb_usine;

    int &m_cookiesParSeconde;
};

#endif // BOUTIQUEDIALOG_H
