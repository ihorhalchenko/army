#ifndef BATTLESPELL_H
#define BATTLESPELL_H

#include <iostream>
#include "Spell.h"

class BattleSpell:public Spell {
    protected:
        BattleSpell(const std::string name, int value);
}

#endif //BATTLESPELL_H
