#ifndef ARMY_EXCEPTIONS_H
#define ARMY_EXCEPTIONS_H

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

class HealingWithNoHealSpell : public ArmyException {
    public:
        virtual const char* what() const throw();
};

class NoSuchSpellInBook : public ArmyException {
    public:
        virtual const char* what() const throw();
};

class UnitCantDoThis : public ArmyException {
    public:
        virtual const char* what() const throw();
};

class DemonsLimitIsReached : public ArmyException {
    public:
        virtual const char* what() const throw();
};

class ForbiddenTransformation : public ArmyException {
    public:
        virtual const char* what() const throw();
};

#endif //ARMY_EXCEPTIONS_H