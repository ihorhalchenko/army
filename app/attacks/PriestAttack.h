#ifndef PRIESTATTACK_H
#define PRIESTATTACK_H

#include "IAttack.h"

class PriestAttack : public IAttack {
    public:
        PriestAttack();
        virtual ~PriestAttack();
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg);
};

#endif //PRIESTATTACK_H
