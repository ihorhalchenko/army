#ifndef DEFAULTCOUNTERATTACK_H
#define DEFAULTCOUNTERATTACK_H

#include "ICounterAttack.h"
#include "../units/Unit.h"

class DefaultCounterAttack : public ICounterAttack {
    public:
        DefaultCounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg);
};

#endif //DEFAULTCOUNTERATTACK_H
