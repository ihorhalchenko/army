#ifndef DEFAULTTAKEDAMAGE_H
#define DEFAULTTAKEDAMAGE_H

#include "ITakeDamage.h"

class DefaultTakeDamage : public ITakeDamage {
    public:
        DefaultTakeDamage();
        virtual ~DefaultTakeDamage();
        virtual void takeDamage(Unit& unit, const Damage& dmg);
};

#endif //DEFAULTTAKEDAMAGE_H
