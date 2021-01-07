#ifndef WOLFTAKEDAMAGE_H
#define WOLFTAKEDAMAGE_H

#include "../units/Unit.h"

class WolfTakeDamage : public ITakeDamage {
    public:
        WolfTakeDamage();
        virtual void takeDamage(Unit& unit, const Damage& dmg);
};

#endif //WOLFTAKEDAMAGE_H
