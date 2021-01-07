#include "State.h"

StateType State::getStateType() const {
    return m_stateType;
}

void State::setStateType(StateType st) {
    m_stateType = st;
}
