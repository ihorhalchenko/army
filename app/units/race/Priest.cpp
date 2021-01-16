#include <iostream>
#include "../../spells/battleSpells/MagicArrow.h"
#include "../../spells/healingSpells/Prayer.h"
#include "../../states/PriestState.h"
#include "Priest.h"

Priest::Priest(const std::string& name) : HealerMage(name) {
    addUnitType(Unit::TYPE_PRIEST);
    setState(new PriestState(this));
    MagicArrow ma = MagicArrow();
    Prayer pr = Prayer(); 
    addSpellToBook(ma);
    addSpellToBook(pr);
}

Priest::~Priest() {}