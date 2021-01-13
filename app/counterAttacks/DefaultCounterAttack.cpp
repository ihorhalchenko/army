#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "DefaultCounterAttack.h"

DefaultCounterAttack::DefaultCounterAttack() {}
DefaultCounterAttack::~DefaultCounterAttack() {}

void DefaultCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    Damage dmg = Damage(attackDmg.getValue() * COUNTER_ATTACK_MULTIPLICATOR, attackDmg.getType());
    enemy.takeDamage(dmg);
}