#ifndef DEFAULTATTACK_H
#define DEFAULTATTACK_H

class DefaultAttack : public IAttack {
    public:
        virtual void attack(Unit& attacker, Unit& enemy, Damage& dmg) {
            enemy.takeDamage(dmg);
            enemy.counterAttack(attacker);
        }
};

#endif //DEFAULTATTACK_H
