#ifndef DEFAULTCOUNTERATTACK_H
#define DEFAULTCOUNTERATTACK_H

#include "ICounterAttack.h"

class DefaultCounterAttack : public ICounterAttack {
    public:
        DefaultCounterAttack();
        virtual ~DefaultCounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg);
};

#endif //DEFAULTCOUNTERATTACK_H
