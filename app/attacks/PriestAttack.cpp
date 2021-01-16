#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "PriestAttack.h"

PriestAttack::PriestAttack() {}
PriestAttack::~PriestAttack() {}

void PriestAttack::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    int dmgValue = dmg.getValue();

    if ( enemy.isUnitHasType(Unit::TYPE_UNDEAD) ) {
        dmgValue *= PRIEST_MULTIPLICATOR;
    }
    
    Damage damage = Damage(dmgValue, dmg.getType());
    enemy.takeDamage(damage);
    enemy.counterAttack(attacker);
}