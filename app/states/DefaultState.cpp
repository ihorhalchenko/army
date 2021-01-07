#include "DefaultState.h"

DefaultState::DefaultState() {}
DefaultState::~DefaultState() {}

void DefaultState::attack(Unit& enemy, const Damage& dmg) {
    DefaultAttack da = DefaultAttack();
    da.attack(*m_unit, enemy, dmg);
}

void DefaultState::counterAttack(Unit& enemy, const Damage& attackDmg) {
    DefaultCounterAttack dca = DefaultCounterAttack();
    dca.counterAttack(*m_unit, enemy, attackDmg);
}

void DefaultState::takeDamage(const Damage& dmg) {
    DefaultTakeDamage dtd = DefaultTakeDamage();
    dtd.takeDamage(*m_unit, dmg);
}