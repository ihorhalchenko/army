#include <iostream>
#include "units/Unit.h"
#include "units/SpellCaster.h"
#include "units/race/Rogue.h"
#include "spells/Spell.h"
#include "spells/BattleSpell.h"
#include "spells/battle_spells/MagicArrow.h"
#include "damage/Damage.h"
#include "attacks/IAttack.h"
#include "attacks/DefaultAttack.h"

int main() {
    
    Rogue barbarian("Barbarian");
    Rogue knight("Knight");
    
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    
    barbarian.attack(knight);
    
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    
    //barbarian.takeDamage(19);
    
    

/*
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;

    barbarian.attack(knight);

    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
  */  
    return 0;
}
