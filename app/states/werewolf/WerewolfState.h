#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H

#include "../DefaultState.h"

class WerewolfState : public DefaultState {
    public:
        WerewolfState(Unit* unit);
        virtual ~WerewolfState();

        virtual void turnIntoWolf();
        virtual void turnIntoHuman();
        virtual void transform(Unit* unit);
};

#endif //WEREWOLFSTATE_H
