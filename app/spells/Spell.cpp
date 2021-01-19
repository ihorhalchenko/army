#include "Spell.h"

Spell::Spell(const std::string name, int value, Spell::Type spellType) : m_name(name), m_value(value), m_type(spellType)  {}
Spell::~Spell() {}

const std::string& Spell::getName() const {
    return m_name;
}

int Spell::getValue() const {
    return m_value;
}

Spell::Type Spell::getType() const {
    return m_type;
}

std::string Spell::getStringType() const {
    std::string result = "Not defined";

    if ( m_type == TYPE_BATTLE ) {
        result = "Battle spell";
    } else if ( m_type == TYPE_HEALING ) {
        result = "Healing spell";
    }

    return result;
}

std::ostream& operator<<(std::ostream& out, const Spell& spell) {
    out << "Name: " << spell.getName() << "; Spell value: " << spell.getValue() << "; Spell type: " << spell.getStringType() << ";" << std::endl;
    return out;
}
