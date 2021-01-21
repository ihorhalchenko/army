#ifndef NECROMANCERATTACK_H
#define NECROMANCERATTACK_H

#include "IAttack.h"

class NecromancerAttack : public IAttack {
    public:
        NecromancerAttack();
        virtual ~NecromancerAttack();
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg);
};

#endif //NECROMANCERATTACK_H
