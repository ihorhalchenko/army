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
        DamageType m_type;

    public:
        Damage(int value, DamageType type);
        
        int getValue() const;
        DamageType getType() const;
};

#endif //DAMAGE_H
