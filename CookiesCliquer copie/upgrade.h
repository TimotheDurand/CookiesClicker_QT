#include <QString>

class Upgrade {
public:
    Upgrade(QString nom, int prix, int cookiesParSeconde);

    bool acheter(int &cookies);
    void tick(int &cookies);

    QString nom()               const { return m_nom; }
    int     prix()              const { return m_prix; }
    int     quantite()          const { return m_quantite; }
    int     cookiesParSeconde() const { return m_cps; }

private:
    QString m_nom;
    double     m_prix;
    int     m_cps;
    int     m_quantite;
};
