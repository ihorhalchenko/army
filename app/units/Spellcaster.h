#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"

class Spellcaster: public Unit {
    protected:
        Spellcaster(const std::string& name);
        ~Spellcaster();
    public:
        void attack(Unit& enemy, BattleSpell& bs);
};

#endif //SPELLCASTER_H
