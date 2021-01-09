#ifndef COUNTERATTACK_H
#define COUNTERATTACK_H

class Unit;
class Damage;

class ICounterAttack {
    public:
        virtual ~ICounterAttack();
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) = 0;
};

#endif //COUNTERATTACK_H
