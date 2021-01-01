#ifndef HEALER_H
#define HEALER_H

#include "..\Spellcaster.h"

class Healer : public Spellcaster {
    protected:
        Healer(const std::string& name);
    
    public:
        void addSpellToBook(Spell* spell);
};

#endif //HEALER_H
