#ifndef BOUTIQUEDIALOG_H
#define BOUTIQUEDIALOG_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class BoutiqueDialog;
}

class BoutiqueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BoutiqueDialog(int &cookies, int &nb_mamie, int &nb_boulangerie,
                            int &nb_magazin, int &nb_usine, int&cookiesParSeconde,
                            int &prix_mamie, int &prix_boulangerie, int &prix_magazin,
                            int &prix_usine,
                            QTimer *timer, QWidget *parent = nullptr);
    ~BoutiqueDialog();

private slots:
    void onTimeout();
    void on_pushButtonMamie_clicked();

    void on_pushButtonBoulangerie_clicked();

    void on_pushButtonMagazin_clicked();

    void on_pushButtonUsine_clicked();

private:
    Ui::BoutiqueDialog *ui;

    int &m_cookies;
    int &m_nb_mamie;
    int &m_nb_boulangerie;
    int &m_nb_magazin;
    int &m_nb_usine;

    int &m_prix_mamie;
    int &m_prix_boulangerie;
    int &m_prix_magazin;
    int &m_prix_usine;

    int &m_cookiesParSeconde;
};

#endif // BOUTIQUEDIALOG_H
