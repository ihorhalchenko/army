#ifndef WOLFSTATE_H
#define WOLFSTATE_H

#include "WerewolfState.h"

class WolfState : public WerewolfState {
    public:
        WolfState(Unit* unit);
        virtual ~WolfState();

        virtual void takeDamage(const Damage& dmg);
};

#endif //WOLFSTATE_H
