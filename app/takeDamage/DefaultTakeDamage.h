#ifndef DEFAULTTAKEDAMAGE_H
#define DEFAULTTAKEDAMAGE_H

#include "../units/Unit.h"

class DefaultTakeDamage : public ITakeDamage {
    public:
        DefaultTakeDamage();
        virtual void takeDamage(Unit& unit, const Damage& dmg);
};

#endif //DEFAULTTAKEDAMAGE_H
