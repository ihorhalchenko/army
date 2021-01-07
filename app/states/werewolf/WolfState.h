#ifndef WOLFSTATE_H
#define WOLFSTATE_H

#define WOLF_MULTIPLICATOR 1.5

#include "../../units/Unit.h"

class WolfState : public WerewolfState {
    public:
        WolfState();
        virtual ~WolfState();

        virtual void takeDamage(const Damage& dmg);
};

#endif //WOLFSTATE_H
