#ifndef SPELLS_H
#define SPELLS_H

#include <iostream>

enum SpellType {
    BATTLE_SPELL,
    HEALING_SPELL
};

class Spell {
    private:
        std::string m_name;
        int m_value;
        SpellType m_type;

    public:
        Spell(const std::string name, int value, SpellType spellType);
        
        const std::string& getName() const;
        int getValue() const;
        SpellType getType() const;
        std::string getStringType() const;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);

#endif //SPELLS_H
