#include <iostream>
#include "Exceptions.h"
#include "units/race/Soldier.h"
#include "units/race/Werewolf.h"
#include "units/race/Wizard.h"

int main() {
    try {
        Soldier knight("Vasil");
        Werewolf werewolf("Semen");
        Wizard wizard("Petro");

        std::cout << knight << std::endl;
        std::cout << wizard << std::endl;        

        std::cout << "2----------------------------" << std::endl;

        wizard.cast(knight, "Magic Arrow");

        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "3----------------------------" << std::endl;

        //wizard.cast(knight, "Prayer");

        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 

/*
        std::cout << knight << std::endl;
        std::cout << wizard << std::endl;        
        
        std::cout << "1----------------------------" << std::endl;

        wizard.attack(knight);

        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "2----------------------------" << std::endl;

        wizard.cast(knight, "Magic Arrow");

        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "3----------------------------" << std::endl;

        knight.attack(wizard);

        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "4----------------------------" << std::endl;
        werewolf.transform(wizard);
        wizard.turnIntoWolf();
        wizard.attack(knight);
        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 

        std::cout << "4----------------------------" << std::endl;
        wizard.cast(knight, "Magic Arrow");
        std::cout << knight << std::endl;
        std::cout << wizard << std::endl; 
*/


        /*
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;

        werewolf.attack(knight);

        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;

        std::cout << "----------------------------" << std::endl;
        werewolf.turnIntoHuman();
        werewolf.transform(knight);
        knight.turnIntoWolf();
        werewolf.turnIntoWolf();
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;
        std::cout << "----------------------------" << std::endl;
        knight.attack(werewolf);
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;
        std::cout << "----------------------------" << std::endl;
        knight.turnIntoHuman();
        werewolf.turnIntoHuman();
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;
        */
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
