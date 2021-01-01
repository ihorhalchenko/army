#include "Healer.h"

Healer::Healer(const std::string& name) : Spellcaster(name) {
    this->addUnitType(UNIT_TYPE_HEALER);
}

void Healer::addSpellToBook(Spell* spell) {
    int spellValue = spell->getValue();
    std::map<std::string, Spell>& sb = this->getSpellBook();
    
    if ( spell->getType() == BATTLE_SPELL ) {
        spellValue /= 2;
    }
    Spell insertSpell = Spell(spell->getName(), spellValue, spell->getType());
    sb.insert( std::pair<std::string, Spell>(spell->getName(), insertSpell) );
}

