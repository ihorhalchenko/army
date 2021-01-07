#include "WolfState.h"

WolfState::WolfState(Unit& unit) {
    setStateType(WEREWOLF_WOLF_STATE);

    unit.setHitPointsLimit(unit.getHitPointsLimit() * WOLF_MULTIPLICATOR);
    unit.setHitPoints(unit.getHitPoints() * WOLF_MULTIPLICATOR);
    unit.setDamageValue(unit.getDamageValue() * WOLF_MULTIPLICATOR);
}

void WolfState::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    WolfAttack wa = WolfAttack();
    wa.attack(attacker, enemy, dmg);
}

void WolfState::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    WolfCounterAttack wca = WolfCounterAttack();
    wca.counterAttack(counterAttacker, enemy, attackDmg);
}

void WolfState::takeDamage(Unit& unit, const Damage& dmg) {
    WolfTakeDamage wtd = WolfTakeDamage();
    wtd.takeDamage(unit, dmg);
}
