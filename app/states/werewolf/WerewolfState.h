#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H

#include "../../units/Unit.h"

class WerewolfState : public DefaultState {
    public:
        WerewolfState();
        virtual ~WerewolfState();

        virtual void turnIntoWolf();
        virtual void turnIntoHuman();
};

#endif //WEREWOLFSTATE_H
