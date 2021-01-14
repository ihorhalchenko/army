#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "../Spellcaster.h"
#include "../../observation/IObserver.h"

class Necromancer : public Spellcaster, public IObserver  {
    public:
        Necromancer(const std::string& name);
        virtual ~Necromancer();

        virtual void attack(Unit& enemy);

        virtual void update(Unit* unit);
};

#endif //NECROMANCER_H
