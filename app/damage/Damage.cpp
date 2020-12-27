#include "Damage.h"

Damage::Damage(int value, DamageType type) : m_value(value), m_type(type) {}

int Damage::getValue() const {
    return m_value;
}

DamageType Damage::getType() const {
    return m_type;
}
