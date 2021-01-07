#include "WolfState.h"

WolfState::WolfState() {
    m_unit->setHitPointsLimit(m_unit->getHitPointsLimit() * WOLF_MULTIPLICATOR);
    m_unit->setHitPoints(m_unit->getHitPoints() * WOLF_MULTIPLICATOR);
    m_unit->setDamageValue(m_unit->getDamageValue() * WOLF_MULTIPLICATOR);
}

void WolfState::takeDamage(const Damage& dmg) {
    WolfTakeDamage wtd = WolfTakeDamage();
    wtd.takeDamage(*m_unit, dmg);
}
