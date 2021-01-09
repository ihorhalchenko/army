#ifndef IATTACK_H
#define IATTACK_H

class Unit;
class Damage;

class IAttack {
    public:
        virtual ~IAttack();
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg) = 0;
};

#endif //IATTACK_H
