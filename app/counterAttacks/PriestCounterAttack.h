#ifndef PRIESTCOUNTERATTACK_H
#define PRIESTCOUNTERATTACK_H

#include "ICounterAttack.h"

class PriestCounterAttack : public ICounterAttack {
    public:
        PriestCounterAttack();
        virtual ~PriestCounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg);
};

#endif //PRIESTCOUNTERATTACK_H
