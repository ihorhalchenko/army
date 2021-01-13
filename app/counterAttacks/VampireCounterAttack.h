#ifndef VAMPIRECOUNTERATTACK_H
#define VAMPIRECOUNTERATTACK_H

#include "ICounterAttack.h"

class VampireCounterAttack : public ICounterAttack {
    public:
        VampireCounterAttack();
        virtual ~VampireCounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg);
};

#endif //VAMPIRECOUNTERATTACK_H
