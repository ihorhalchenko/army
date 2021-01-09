#include "../Spellcaster.h"
#include "../../spells/Spell.h"
#include "Healer.h"

Healer::Healer(const std::string& name) : Spellcaster(name) {
    addUnitType(Unit::TYPE_HEALER);
}

Healer::~Healer() {}

void Healer::addSpellToBook(Spell* spell) {
    int spellValue = spell->getValue();
    std::map<std::string, Spell>& sb = getSpellBook();
    
    if ( spell->getType() == Spell::TYPE_BATTLE ) {
        spellValue /= 2;
    }
    Spell insertSpell = Spell(spell->getName(), spellValue, spell->getType());
    sb.insert( std::pair<std::string, Spell>(spell->getName(), insertSpell) );
}

