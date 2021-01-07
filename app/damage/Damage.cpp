#include "Damage.h"

Damage::Damage(int value, Damage::Type type) : m_value(value), m_type(type) {}

int Damage::getValue() const {
    return m_value;
}

Damage::Type Damage::getType() const {
    return m_type;
}
