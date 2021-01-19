#include "../../Exceptions.h"
#include "../../states/DefaultState.h"
#include "../../damage/Damage.h"
#include "../../spells/battleSpells/MagicArrow.h"
#include "Demon.h"

Demon::Demon(const std::string& name) : Soldier(name) {
    setDamageValue(DEMON_DAMAGE_VALUE);
    setHitPoints(DEMON_HIT_POINTS);
    setHitPointsLimit(DEMON_HIT_POINTS_LIMIT);
    addUnitType(Unit::TYPE_DEMON);
    MagicArrow ma = MagicArrow();
    m_spellBook.insert(std::pair<std::string, Spell>(ma.getName(), ma));
}

Demon::~Demon() {}

Spell& Demon::getSpellFromBook(const std::string& spellName) {
    std::map<std::string, Spell>::iterator it = m_spellBook.find(spellName);

    if ( it == m_spellBook.end() ) {
        throw NoSuchSpellInBook();
    }

    return it->second;
}

void Demon::cast(Unit& enemy, const std::string& spellName) {
    if ( isDead() ) {
        return;
    }

    Spell& spell = getSpellFromBook(spellName);
    if ( spell.getType() != Spell::TYPE_BATTLE ) {
        throw AttackWithNotBattleSpell();
    }

    Damage dmg = Damage(spell.getValue(), Damage::TYPE_MAGIC);
    getState()->attack(enemy, dmg);
}
