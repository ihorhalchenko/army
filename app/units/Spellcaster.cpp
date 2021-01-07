#include "SpellCaster.h"

Spellcaster::Spellcaster(const std::string& name, int damageValue, int hitPoints, int hitPointsLimit) : Unit(name, damageValue, hitPoints, hitPointsLimit) {
    addUnitType(Unit::TYPE_SPELLCASTER);
}

Spellcaster::~Spellcaster() {}

std::map<std::string, Spell>& Spellcaster::getSpellBook() {
    return m_spellBook;
}

Spell& Spellcaster::getSpellFromBook(const std::string& spellName) {
    std::map<std::string, Spell>::iterator it = m_spellBook.find(spellName);

    if ( it == m_spellBook.end() ) {
        throw NoSuchSpellInBook();
    } 
    if ( it->second.getType() != Spell::TYPE_BATTLE ) {
        throw AttackWithNotBattleSpell();
    }

    return it->second;
}

void Spellcaster::attack(Unit& enemy, const std::string& spellName) {
    ensureIsAlive();

    Spell& spell = getSpellFromBook(spellName);
    Damage dmg = Damage(spell.getValue(), Damage::TYPE_MAGIC);
    getState()->attack(enemy, dmg);
}

void Spellcaster::addSpellToBook(Spell* spell) {
    m_spellBook.insert( std::pair<std::string, Spell>(spell->getName(), *spell) );
}

void Spellcaster::showSpellBook() const {
    std::cout << "Spell book contains spells:" << std::endl;
    for ( std::map<std::string, Spell>::const_iterator it = m_spellBook.begin(); it != m_spellBook.end(); ++it ) {
        std::cout << it->second << std::endl;
    }
}

