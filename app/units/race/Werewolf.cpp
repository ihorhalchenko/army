#include "Werewolf.h"

Werewolf::Werewolf (const std::string& name) : Unit(name) {
    addUnitType(Unit::TYPE_WEREWOLF);
    setState(new WerewolfState());
}
