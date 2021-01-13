#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H

#include "IAttack.h"

class VampireAttack : public IAttack {
    public:
        VampireAttack();
        virtual ~VampireAttack();
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg);
};

#endif //VAMPIREATTACK_H
