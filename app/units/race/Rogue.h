#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "../Unit.h"

class Rogue: public Unit {
    public:
        Rogue(const std::string& name, int hp, int dmg);

        virtual void attack(Unit& enemy, int damage);
};

#endif //ROGUE_H
