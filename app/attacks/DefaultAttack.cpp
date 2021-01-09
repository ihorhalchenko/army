#include "../units/Unit.h"
#include "DefaultAttack.h"

DefaultAttack::DefaultAttack() {}
DefaultAttack::~DefaultAttack() {}

void DefaultAttack::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    enemy.takeDamage(dmg);
    enemy.counterAttack(attacker);
}