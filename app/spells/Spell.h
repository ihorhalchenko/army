#ifndef SPELLS_H
#define SPELLS_H

#include <iostream>

class Spell {
    public:
        enum Type {
            TYPE_BATTLE,
            TYPE_HEALING
        };

    private:
        std::string m_name;
        int m_value;
        Type m_type;

    public:
        Spell(const std::string name, int value, Type spellType);
        
        const std::string& getName() const;
        int getValue() const;
        Type getType() const;
        std::string getStringType() const;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);

#endif //SPELLS_H
