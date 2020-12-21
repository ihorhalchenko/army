#include "Rogue.h"

Rogue::Rogue(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {}

void Rogue::attack(Unit& enemy) {
    Unit::attack(enemy);
}
