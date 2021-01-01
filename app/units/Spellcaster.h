#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include "Unit.h"
#include "../spells/Spell.h"

class Spellcaster: public Unit {
    private:
        std::map<std::string, Spell> m_spellBook;
    protected:
        Spellcaster(const std::string& name, int damageValue = 10, int hitPoints = 80, int hitPointsLimit = 80);
        ~Spellcaster();

        std::map<std::string, Spell>& getSpellBook();
        Spell& getSpellFromBook(const std::string& spellName);
    public:
        void attack(Unit& enemy, const std::string& spellName);

        void addSpellToBook(Spell* spell);
        void showSpellBook() const;
};

#endif //SPELLCASTER_H
