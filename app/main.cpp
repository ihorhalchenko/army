#include <iostream>
#include <set>
#include "Exceptions.h"
#include "units/race/Soldier.h"
#include "units/race/Werewolf.h"
#include "units/race/Wizard.h"
#include "units/race/Warlock.h"
#include "units/race/Demon.h"

int main() {
    try {
        Soldier soldier("Vasil");
        Werewolf werewolf("Semen");
        Wizard wizard("Petro");
        Warlock warlock("Gnat");
        Demon demon1 = warlock.callDemon();
        Demon demon2 = warlock.callDemon();
        Demon demon3 = warlock.callDemon();

        std::cout << wizard << std::endl;        

        soldier.attack(demon1);

        std::cout << wizard << std::endl;       
        soldier.attack(demon1);
        Demon demon4 = warlock.callDemon();
        std::cout << demon1 << std::endl;       

/*
        std::cout << *demon1 << std::endl;        
        
        std::cout << soldier << std::endl;   
        

        std::cout << "2----------------------------" << std::endl;

        demon1->attack(soldier);

        std::cout << *demon1 << std::endl;        
        std::cout << soldier << std::endl;

        std::cout << "2----------------------------" << std::endl;
        soldier.attack(*demon1);
        std::cout << *demon1 << std::endl;        
        std::cout << soldier << std::endl;

        std::cout << "2----------------------------" << std::endl;
        soldier.attack(*demon1);
        std::cout << *demon1 << std::endl;        
        std::cout << soldier << std::endl;
      */  

/*
        std::cout << soldier << std::endl;
        std::cout << wizard << std::endl;        
        
        std::cout << "1----------------------------" << std::endl;

        wizard.attack(soldier);

        std::cout << soldier << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "2----------------------------" << std::endl;

        wizard.cast(soldier, "Magic Arrow");

        std::cout << soldier << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "3----------------------------" << std::endl;

        soldier.attack(wizard);

        std::cout << soldier << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "4----------------------------" << std::endl;
        werewolf.transform(wizard);
        wizard.turnIntoWolf();
        wizard.attack(soldier);
        std::cout << soldier << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "4----------------------------" << std::endl;
        wizard.cast(soldier, "Magic Arrow");
        std::cout << soldier << std::endl;
        std::cout << wizard << std::endl; 
*/


        /*
        std::cout << soldier << std::endl;
        std::cout << werewolf << std::endl;

        werewolf.attack(soldier);

        std::cout << soldier << std::endl;
        std::cout << werewolf << std::endl;

        std::cout << "----------------------------" << std::endl;
        werewolf.turnIntoHuman();
        werewolf.transform(soldier);
        soldier.turnIntoWolf();
        werewolf.turnIntoWolf();
        std::cout << soldier << std::endl;
        std::cout << werewolf << std::endl;
        std::cout << "----------------------------" << std::endl;
        soldier.attack(werewolf);
        std::cout << soldier << std::endl;
        std::cout << werewolf << std::endl;
        std::cout << "----------------------------" << std::endl;
        soldier.turnIntoHuman();
        werewolf.turnIntoHuman();
        std::cout << soldier << std::endl;
        std::cout << werewolf << std::endl;
        */
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
