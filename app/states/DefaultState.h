#ifndef DEFAULTSTATE_H
#define DEFAULTSTATE_H

#include "State.h"

class Unit;
class Damage;

class DefaultState : public State {
    public:
        DefaultState(Unit* unit);
        virtual ~DefaultState();
        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(const Damage& dmg);
};

#endif //DEFAULTSTATE_H
