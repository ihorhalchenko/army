#ifndef WOLFTAKEDAMAGE_H
#define WOLFTAKEDAMAGE_H

#include "ITakeDamage.h"

class WolfTakeDamage : public ITakeDamage {
    public:
        WolfTakeDamage();
        virtual ~WolfTakeDamage();
        virtual void takeDamage(Unit& unit, const Damage& dmg);
};

#endif //WOLFTAKEDAMAGE_H
