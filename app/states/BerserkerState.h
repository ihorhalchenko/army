#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H

#include "DefaultState.h"

class BerserkerState : public DefaultState {
    public:
        BerserkerState(Unit* unit);
        virtual ~BerserkerState();

        virtual void takeDamage(const Damage& dmg);
};

#endif //BERSERKERSTATE_H
