#ifndef DEFAULTATTACK_H
#define DEFAULTATTACK_H

#include "../units/Unit.h"

class DefaultAttack : public IAttack {
    public:
        DefaultAttack();
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg);
};

#endif //DEFAULTATTACK_H
