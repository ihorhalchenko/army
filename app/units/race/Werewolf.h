#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "../Unit.h"

class Werewolf : public Unit {
    public:
        Werewolf(const std::string& name);
        virtual ~Werewolf();
};

#endif //WEREWOLF_H
