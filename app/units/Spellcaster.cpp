#include "SpellCaster.h"

Spellcaster::Spellcaster(const std::string& name) : Unit(name) {}

void Spellcaster::attack(Unit& enemy, BattleSpell& bs) {
    this->ensureIsAlive();

    Damage* dmg = new Damage(bs.getValue(), MAGIC_DAMAGE);
    this->getAttackStrategy()->attack(*this, enemy, *dmg);

    delete dmg;
}