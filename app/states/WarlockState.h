#ifndef WARLOCKSTATE_H
#define WARLOCKSTATE_H

#include <iostream>
#include "DefaultState.h"

class WarlockState : public DefaultState {
    public:
        WarlockState(Unit* unit);
        virtual ~WarlockState();

        virtual Demon callDemon(const std::string& name);
};

#endif //WARLOCKSTATE_H
