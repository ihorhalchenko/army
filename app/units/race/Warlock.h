#ifndef WARLOCK_H
#define WARLOCK_H

#include "../Spellcaster.h"
#include "../../observation/IObserver.h"

class Demon;

class Warlock : public Spellcaster, public IObserver  {
    public:
        Warlock(const std::string& name);
        virtual ~Warlock();

        virtual void update(Unit* unit);
};

#endif //WARLOCK_H
