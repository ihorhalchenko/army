#include "Rogue.h"

Rogue::Rogue(const std::string& name) : Unit(name) {
    this->setAttackStrategy(new DefaultAttack());
    this->setTakeDamageStrategy(new DefaultTakeDamage());
    this->setCounterAttackStrategy(new DefaultCounterAttack());
}
