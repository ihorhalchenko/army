#include "HumanState.h"

HumanState::HumanState() {
    int hp = m_unit->getHitPoints() / WOLF_MULTIPLICATOR;
    if ( hp == 0 ) {
        throw UnitIsDead();
    }

    m_unit->setHitPointsLimit(m_unit->getHitPointsLimit() / WOLF_MULTIPLICATOR);
    m_unit->setHitPoints(hp);
    m_unit->setDamageValue(m_unit->getDamageValue() / WOLF_MULTIPLICATOR);
}

HumanState::~HumanState() {}
