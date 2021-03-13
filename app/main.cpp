#include <iostream>
#include <set>
#include "Exceptions.h"
#include "units/race/Soldier.h"
#include "units/race/Werewolf.h"
#include "units/race/Wizard.h"
#include "units/race/Warlock.h"
#include "units/race/Demon.h"
#include "units/race/Necromancer.h"
#include "units/race/Vampire.h"
#include "units/race/Rogue.h"
#include "units/race/Berserker.h"
#include "units/race/Healer.h"
#include "units/race/Priest.h"

int main() {
    try {
        Soldier soldier("Soldier");
        Soldier soldier1("Soldier1");
        Soldier soldier2("Soldier2");
        
        Rogue rogue = Rogue("Rogue");
        Berserker berserker = Berserker("Berserker");
        Vampire vampire = Vampire("Vampire");
        Werewolf werewolf("Werewolf");
        Wizard wizard("Wizard");
        Healer healer("Healer");
        Priest priest = Priest("Priest");
        Warlock warlock("Warlock");
        Necromancer necromancer = Necromancer("Necromancer");

        Demon demon1 = warlock.callDemon("demon1");
        Demon demon2 = warlock.callDemon("demon2");
        Demon demon3 = warlock.callDemon("demon3");
        
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    

    return 0;
}
