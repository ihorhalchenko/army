#ifndef NECROMANCERSTATE_H
#define NECROMANCERSTATE_H

#include "DefaultState.h"

class NecromancerState : public DefaultState {
    public:
        NecromancerState(Unit* unit);
        virtual ~NecromancerState();

        virtual void attack(Unit& enemy, const Damage& dmg);
};

#endif //NECROMANCERSTATE_H
