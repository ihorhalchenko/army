#ifndef WOLFSTATE_H
#define WOLFSTATE_H

#include "../../units/Unit.h"

#define WOLF_MULTIPLICATOR 1.5

class WolfState : public State {
    public:
        WolfState(Unit& unit);
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(Unit& unit, const Damage& dmg);
};

#endif //WOLFSTATE_H
