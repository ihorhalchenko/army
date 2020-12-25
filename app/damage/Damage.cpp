#include "Damage.h"

Damage::Damage(int value, DamageType dmgType) : m_value(value), m_dmgType(dmgType) {}

int Damage::getValue() const {
    return m_value;
}
