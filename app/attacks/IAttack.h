#ifndef IATTACK_H
#define IATTACK_H

#include "../units/Unit.h"

class Unit;
class Damage;

class IAttack {
    public:
        virtual void attack(Unit& attacker, Unit& enemy, Damage* dmg) = 0;
};

#endif //IATTACK_H
