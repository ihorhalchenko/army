#ifndef IATTACK_H
#define IATTACK_H

class IAttack {
    public:
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg) = 0;
}

#endif //IATTACK_H
