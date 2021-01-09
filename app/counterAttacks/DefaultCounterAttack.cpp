#include "../units/Unit.h"
#include "../damage/Damage.h"
#include "DefaultCounterAttack.h"

DefaultCounterAttack::DefaultCounterAttack() {}
DefaultCounterAttack::~DefaultCounterAttack() {}

void DefaultCounterAttack::counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) {
    Damage dmg = Damage(attackDmg.getValue() / 2, attackDmg.getType());
    enemy.takeDamage(dmg);
}