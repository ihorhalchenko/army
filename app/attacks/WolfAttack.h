#ifndef WOLFATTACK_H
#define WOLFATTACK_H

#include "IAttack.h"
#include "../units/Unit.h"

class WolfAttack : public IAttack {
    public:
        WolfAttack();
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg);
};

#endif //WOLFATTACK_H
