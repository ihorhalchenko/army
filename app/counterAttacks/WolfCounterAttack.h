#ifndef WOLFCOUNTERATTACK_H
#define WOLFCOUNTERATTACK_H

#include "../units/Unit.h"

class WolfCounterAttack : public ICounterAttack {
    public:
        WolfCounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg);
};

#endif //WOLFCOUNTERATTACK_H
