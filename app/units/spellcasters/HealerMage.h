#ifndef HEALERMAGE_H
#define HEALERMAGE_H

#include "../Spellcaster.h"

class HealerMage : public Spellcaster {
    protected:
        HealerMage(const std::string& name);
        virtual ~HealerMage();
    
    public:
        void addSpellToBook(Spell& spell);
};

#endif //HEALERMAGE_H
