#ifndef PRIESTSTATE_H
#define PRIESTSTATE_H

#include "DefaultState.h"

class PriestState : public DefaultState {
    public:
        PriestState(Unit* unit);
        virtual ~PriestState();

        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
};

#endif //PRIESTSTATE_H