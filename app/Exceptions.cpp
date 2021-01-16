#include "Exceptions.h"

const char* UnitIsDead::what() const throw() {
    return "Unit is dead.";
}

const char* AttackWithNotBattleSpell::what() const throw() {
    return "You try to attack using not a battle spell.";
}

const char* HealingWithNoHealSpell::what() const throw() {
    return "You try to heal using not a healing spell.";
}

const char* NoSuchSpellInBook::what() const throw() {
    return "There is no such spell in the spellbook.";
}

const char* UnitCantDoThis::what() const throw() {
    return "Unit can't do this.";
}

const char* DemonsLimitIsReached::what() const throw() {
    return "Demons limit has been reached already.";
}

const char* ForbiddenTransformation::what() const throw() {
    return "Such transformation is forbidden.";
}