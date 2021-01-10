#include <iostream>
#include "Exceptions.h"
#include "units/race/Soldier.h"
#include "units/race/Werewolf.h"

int main() {
    try {
        Soldier barbarian("Barbarian");
        Soldier knight("Knight");
        Werewolf werewolf("Semen");


        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;

        werewolf.attack(knight);

        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;

        std::cout << "----------------------------" << std::endl;
        //werewolf.turnIntoHuman();
        werewolf.transform(knight);
        knight.turnIntoWolf();
        werewolf.turnIntoWolf();
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;
        std::cout << "----------------------------" << std::endl;
        //knight.attack(werewolf);
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;
        std::cout << "----------------------------" << std::endl;
        knight.turnIntoHuman();
        werewolf.turnIntoHuman();
        std::cout << knight << std::endl;
        std::cout << werewolf << std::endl;
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }


    
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
