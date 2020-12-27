#ifndef COUNTERATTACK_H
#define COUNTERATTACK_H

#include "../units/Unit.h"

class Unit;
class Damage;

class ICounterAttack {
    public:
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg) = 0;
};

#endif //COUNTERATTACK_H
