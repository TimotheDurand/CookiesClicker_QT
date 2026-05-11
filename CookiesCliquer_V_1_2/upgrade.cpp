#include "upgrade.h"

Upgrade::Upgrade(QString nom, int prix, int cookiesParSeconde)
    : m_nom(nom), m_prix(prix), m_cps(cookiesParSeconde), m_quantite(0)
{}

bool Upgrade::acheter(int &cookies)
{
    if (cookies >= m_prix) {
        cookies    -= m_prix;
        m_quantite += 1;
        m_prix      = m_prix * 1.15;
        return true;
    }
    return false;
}

void Upgrade::tick(int &cookies)
{
    cookies += m_cps * m_quantite;
}
