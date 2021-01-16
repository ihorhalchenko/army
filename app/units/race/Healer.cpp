#include <iostream>
#include "../../spells/battleSpells/MagicArrow.h"
#include "../../spells/healingSpells/Prayer.h"
#include "../../states/DefaultState.h"
#include "Healer.h"

Healer::Healer(const std::string& name) : HealerMage(name) {
    addUnitType(Unit::TYPE_HEALER);
    setState(new DefaultState(this));
    MagicArrow ma = MagicArrow();
    Prayer pr = Prayer(); 
    addSpellToBook(ma);
    addSpellToBook(pr);
}

Healer::~Healer() {}