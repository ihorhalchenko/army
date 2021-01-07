#include "Exceptions.h"

const char*  UnitIsDead::what() const throw() {
    return "Unit is dead.";
}

const char*  AttackWithNotBattleSpell::what() const throw() {
    return "You try to attack using not a battle spell.";
}

const char*  NoSuchSpellInBook::what() const throw() {
    return "There is no such spell in the spellbook.";
}