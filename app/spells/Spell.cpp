#include "Spell.h"

Spell::Spell(const std::string name, int value) : m_name(name), m_value(value) {}

const std::string& Spell::getName() const {
    return m_name;
}

int Spell::getValue() const {
    return m_value;
}
