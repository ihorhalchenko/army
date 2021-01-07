#ifndef ITAKEDAMAGE_H
#define ITAKEDAMAGE_H

class Unit;
class Damage;

class ITakeDamage {
    public:
        virtual void takeDamage(Unit& unit, const Damage& dmg) = 0;
};

#endif //ITAKEDAMAGE_H
