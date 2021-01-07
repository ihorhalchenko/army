#ifndef DAMAGE_H
#define DAMAGE_H

#include <iostream>

class Damage {
    public:
        enum Type {
            TYPE_PHYSICAL,
            TYPE_MAGIC
        };

    private:
        int m_value;
        Type m_type;

    public:
        Damage(int value, Type type);
        
        int getValue() const;
        Type getType() const;
};

#endif //DAMAGE_H
