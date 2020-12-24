#include "Damage.h"

Damage::Damage(int value) : m_value(value) {}

int Damage::getValue() const {
    return m_value;
}
