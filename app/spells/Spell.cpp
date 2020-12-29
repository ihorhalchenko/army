#include "Spell.h"

Spell::Spell(const std::string name, int value, SpellType spellType) : m_name(name), m_value(value), m_type(spellType)  {}

const std::string& Spell::getName() const {
    return m_name;
}

int Spell::getValue() const {
    return m_value;
}

SpellType Spell::getType() const {
    return m_type;
}

std::string Spell::getStringType() const {
    if (m_type == BATTLE_SPELL) {
        return "Battle spell";
    } else if (m_type == HEALING_SPELL) {
        return "Healing spell";
    }
}

std::ostream& operator<<(std::ostream& out, const Spell& spell) {
    out << "Name: " << spell.getName() << "; Spell value: " << spell.getValue() << "; Spell type: " << spell.getStringType() << std::endl;
}
