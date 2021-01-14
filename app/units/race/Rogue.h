#ifndef ROGUE_H
#define ROGUE_H

#include "../Unit.h"

class Rogue : public Unit {
    public:
        Rogue(const std::string& name);
        virtual ~Rogue();
};

#endif //ROGUE_H
