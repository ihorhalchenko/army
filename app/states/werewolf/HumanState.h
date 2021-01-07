#ifndef HUMANSTATE_H
#define HUMANSTATE_H

#include "../../units/Unit.h"

class HumanState : public State {
    public:
        HumanState(Unit& unit);
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(Unit& unit, const Damage& dmg);
};

#endif //HUMANSTATE_H
