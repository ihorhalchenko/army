#ifndef ITAKEDAMAGE_H
#define ITAKEDAMAGE_H

#include "../units/Unit.h"

class Unit;
class Damage;

class ITakeDamage {
    public:
        virtual void takeDamage(Unit& unit, Damage& dmg) = 0;
};

#endif //ITAKEDAMAGE_H
