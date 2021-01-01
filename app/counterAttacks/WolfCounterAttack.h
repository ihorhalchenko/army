#ifndef WOLFCOUNTERATTACK_H
#define WOLFCOUNTERATTACK_H

#include "ICounterAttack.h"
#include "../units/Unit.h"

class WolfCounterAttack : public ICounterAttack {
    public:
        WolfCounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg);
};

#endif //WOLFCOUNTERATTACK_H
