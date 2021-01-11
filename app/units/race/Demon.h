#ifndef DEMON_H
#define DEMON_H

#include <iostream>
#include <map>
#include "../Unit.h"
#include "../../spells/Spell.h"

class Demon : public Unit {
    private:
        std::map<std::string, Spell> m_spellBook;
        Spell& getSpellFromBook(const std::string& spellName);
        
    public:
        Demon();
        virtual ~Demon();

        void cast(Unit& enemy, const std::string& spellName);
};

#endif //DEMON_H
