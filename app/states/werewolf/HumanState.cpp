#include "HumanState.h"

HumanState::HumanState(Unit& unit) {
    setStateType(WEREWOLF_HUMAN_STATE);

    if ( unit.getState()->getStateType() == WEREWOLF_WOLF_STATE ) {
            
        int hp = unit.getHitPoints() / WOLF_MULTIPLICATOR;
        if ( hp == 0 ) {
            throw UnitIsDead();
        }

        unit.setHitPointsLimit(unit.getHitPointsLimit() / WOLF_MULTIPLICATOR);
        unit.setHitPoints(hp);
        unit.setDamageValue(unit.getDamageValue() / WOLF_MULTIPLICATOR);
    }
}

void HumanState::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    DefaultAttack da = DefaultAttack();
    da.attack(attacker, enemy, dmg);
}

void HumanState::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    DefaultCounterAttack dca = DefaultCounterAttack();
    dca.counterAttack(counterAttacker, enemy, attackDmg);
}

void HumanState::takeDamage(Unit& unit, const Damage& dmg) {
    DefaultTakeDamage dtd = DefaultTakeDamage();
    dtd.takeDamage(unit, dmg);
}
