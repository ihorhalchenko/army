#include "../../spells/Spell.h"
#include "Battlemage.h"

Battlemage::Battlemage(const std::string& name) : Spellcaster(name) {
    addUnitType(Unit::TYPE_BATTLEMAGE);
}

Battlemage::~Battlemage() {}

void Battlemage::addSpellToBook(Spell& spell) {
    int spellValue = spell.getValue();
    std::map<std::string, Spell>& sb = getSpellBook();
    
    if ( spell.getType() == Spell::TYPE_HEALING ) {
        spellValue *= SPELL_MULTIPLICATOR;
    }
    Spell insertSpell = Spell(spell.getName(), spellValue, spell.getType());
    sb.insert(std::pair<std::string, Spell>(spell.getName(), insertSpell));
}
