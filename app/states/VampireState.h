#ifndef VAMPIRESTATE_H
#define VAMPIRESTATE_H

#include "DefaultState.h"

class VampireState : public DefaultState {
    public:
        VampireState(Unit* unit);
        virtual ~VampireState();

        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
};

#endif //VAMPIRESTATE_H