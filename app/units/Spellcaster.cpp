#include "SpellCaster.h"

Spellcaster::Spellcaster(const std::string& name, int damageValue, int hitPoints, int hitPointsLimit) : Unit(name, damageValue, hitPoints, hitPointsLimit) {}

std::map<std::string, Spell>& Spellcaster::getSpellBook() {
    return m_spellBook;
}

void Spellcaster::attack(Unit& enemy, const std::string& spellName) {
    this->ensureIsAlive();

    std::map<std::string, Spell>::iterator it = m_spellBook.find(spellName);
    if ( it == m_spellBook.end() ) {
        throw NoSuchSpellInBook();
    } 

    Spell& spell = it->second;
    if ( spell.getType() != BATTLE_SPELL ) {
        throw AttackWithNotBattleSpell();
    }

    Damage* dmg = new Damage(spell.getValue(), MAGIC_DAMAGE);
    this->getAttackStrategy()->attack(*this, enemy, *dmg);

    delete dmg;
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

