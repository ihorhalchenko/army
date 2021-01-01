#ifndef IWEREWOLFSTATE_H
#define IWEREWOLFSTATE_H

class Unit;
class Damage;

class IWerewolfState {
    public:
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg) = 0;
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, Damage& attackDmg) = 0;
        virtual void takeDamage(Unit& unit, Damage& dmg) = 0;
};

#endif //IWEREWOLFSTATE_H
