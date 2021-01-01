#include "Werewolf.h"

Werewolf::Werewolf (const std::string& name) : Unit(name) {
    this->addUnitType(UNIT_TYPE_WEREWOLF);
    setState(new HumanState());
}

Werewolf::~Werewolf() {
    delete m_state;
}

void Werewolf::setState(IWerewolfState* state) {
    if ( m_state != NULL ) {
        delete m_state;
    }
    m_state = state;
}

void Werewolf::attack(Unit& enemy) {
    Damage* dmg = getDamage();
    m_state->attack(*this, enemy, *dmg);
}

void Werewolf::counterAttack(Unit& enemy) {
    Damage* dmg = getDamage();
    m_state->counterAttack(*this, enemy, *dmg);
}

void Werewolf::takeDamage(Damage& dmg) {
    m_state->takeDamage(*this, dmg);
}
