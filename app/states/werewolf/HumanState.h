#ifndef HUMANSTATE_H
#define HUMANSTATE_H

#include "WerewolfState.h"

class HumanState : public WerewolfState {
    public:
        HumanState(Unit* unit);
        virtual ~HumanState();
};

#endif //HUMANSTATE_H
