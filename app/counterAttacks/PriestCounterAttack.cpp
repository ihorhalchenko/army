#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "PriestCounterAttack.h"

PriestCounterAttack::PriestCounterAttack() {}
PriestCounterAttack::~PriestCounterAttack() {}

void PriestCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    int dmgValue = attackDmg.getValue() * COUNTER_ATTACK_MULTIPLICATOR;

    if ( enemy.isUnitHasType(Unit::TYPE_UNDEAD) ) {
        dmgValue *= PRIEST_MULTIPLICATOR;
    }

    Damage dmg = Damage(dmgValue, attackDmg.getType());
    enemy.takeDamage(dmg);
}