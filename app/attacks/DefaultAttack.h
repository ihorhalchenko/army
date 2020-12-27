#ifndef DEFAULTATTACK_H
#define DEFAULTATTACK_H

#include "IAttack.h"

class DefaultAttack : public IAttack {
    public:
        DefaultAttack();
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg);
};

#endif //DEFAULTATTACK_H
