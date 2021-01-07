#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"
#include "../spells/Spell.h"

#define SC_DEFAULT_DAMAGE_VALUE 10
#define SC_DEFAULT_HIT_POINTS 80
#define SC_DEFAULT_HIT_POINTS_LIMIT 80

class Spellcaster: public Unit {
    private:
        std::map<std::string, Spell> m_spellBook;
    protected:
        Spellcaster(const std::string& name, int damageValue = SC_DEFAULT_DAMAGE_VALUE, int hitPoints = SC_DEFAULT_HIT_POINTS, int hitPointsLimit = SC_DEFAULT_HIT_POINTS_LIMIT);
        ~Spellcaster();

        std::map<std::string, Spell>& getSpellBook();
        Spell& getSpellFromBook(const std::string& spellName);
    public:
        void attack(Unit& enemy, const std::string& spellName);

        void addSpellToBook(Spell* spell);
        void showSpellBook() const;
};

#endif //SPELLCASTER_H
