#include <iostream>
#include "../../spells/battleSpells/MagicArrow.h"
#include "../../spells/healingSpells/Prayer.h"
#include "../../states/DefaultState.h"
#include "Wizard.h"

Wizard::Wizard(const std::string& name) : Battlemage(name) {
    addUnitType(Unit::TYPE_WIZARD);
    setState(new DefaultState(this));
    MagicArrow ma = MagicArrow();
    Prayer pr = Prayer(); 
    addSpellToBook(ma);
    addSpellToBook(pr);
}

Wizard::~Wizard() {}