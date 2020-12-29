#ifndef ARMY_EXCEPTIONS_H_H
#define ARMY_EXCEPTIONS_H_H

#include <iostream>

class ArmyException : public std::exception {};

class UnitIsDead : public ArmyException {
    public:
        virtual const char* what() const throw();
};

class AttackWithNotBattleSpell : public ArmyException {
    public:
        virtual const char* what() const throw();
};

class NoSuchSpellInBook : public ArmyException {
    public:
        virtual const char* what() const throw();
};

#endif //ARMY_EXCEPTIONS_H_H