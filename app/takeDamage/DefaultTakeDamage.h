#ifndef DEFAULTTAKEDAMAGE_H
#define DEFAULTTAKEDAMAGE_H

#include "ITakeDamage.h"

class DefaultTakeDamage : public ITakeDamage {
    public:
        DefaultTakeDamage();
        virtual void takeDamage(Unit& unit, Damage& dmg);
};

#endif //DEFAULTTAKEDAMAGE_H
