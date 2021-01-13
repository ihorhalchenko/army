#ifndef WARLOCK_H
#define WARLOCK_H

#include "../Unit.h"
#include "../../observation/IObserver.h"

class Demon;

class Warlock : public Unit, public IObserver  {
    private:
        std::list<Demon*> m_demons;
    public:
        Warlock(const std::string& name);
        virtual ~Warlock();

        Demon callDemon(const std::string& name);

        virtual void update(Unit* unit);
};

#endif //WARLOCK_H
