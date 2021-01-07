#include "Werewolf.h"

Werewolf::Werewolf (const std::string& name) : Unit(name) {
    addUnitType(UNIT_TYPE_WEREWOLF);
    setState(new HumanState(*this));
    setAttackStrategy(0);
    setTakeDamageStrategy(0);
    setCounterAttackStrategy(0);
}

Werewolf::~Werewolf() {}

void Werewolf::attack(Unit& enemy) {
    ensureIsAlive();

    Damage* dmg = getDamage();
    getState()->attack(*this, enemy, *dmg);
}

void Werewolf::counterAttack(Unit& enemy) {
    ensureIsAlive();

    Damage* dmg = getDamage();
    getState()->counterAttack(*this, enemy, *dmg);
}

void Werewolf::takeDamage(const Damage& dmg) {
    ensureIsAlive();

    getState()->takeDamage(*this, dmg);
}

void Werewolf::turnIntoWolf() {
    ensureIsAlive();
    setState(new WolfState(*this));
}

void Werewolf::turnIntoHuman() {
    ensureIsAlive();
    setState(new HumanState(*this));
}
