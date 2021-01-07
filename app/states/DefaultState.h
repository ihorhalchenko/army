#ifndef DEFAULTSTATE_H
#define DEFAULTSTATE_H

#include "../units/Unit.h"

class DefaultState : public State {
    public:
        DefaultState();
        virtual ~DefaultState();
        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(const Damage& dmg);
};

#endif //DEFAULTSTATE_H
