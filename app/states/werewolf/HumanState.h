#ifndef HUMANSTATE_H
#define HUMANSTATE_H

#include "IWerewolfState.h"
#include "../../units/Unit.h"

class HumanState : public IWerewolfState {
    public:
        HumanState();
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg);
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg);
        virtual void takeDamage(Unit& unit, Damage& dmg);
};

#endif //HUMANSTATE_H
