#ifndef WOLFSTATE_H
#define WOLFSTATE_H

#include "IWerewolfState.h"
#include "../../units/Unit.h"

class WolfState : public IWerewolfState {
    public:
        WolfState();
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg);
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg);
        virtual void takeDamage(Unit& unit, Damage& dmg);
};

#endif //WOLFSTATE_H
