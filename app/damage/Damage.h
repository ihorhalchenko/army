#ifndef DAMAGE_H
#define DAMAGE_H

#include <iostream>

enum DamageType {
    PHYSICAL_DAMAGE,
    MAGIC_DAMAGE
};

class Damage {
    private:
        int m_value;

    protected:
        Damage(int value);

    public:
        int getValue() const;
};

#endif //DAMAGE_H
