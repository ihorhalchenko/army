#include <iostream>
#include "units/race/Soldier.h"
#include "units/race/Werewolf.h"

int main() {
    
    Soldier barbarian("Barbarian");
    Soldier knight("Knight");
    Werewolf werewolf("Semen");


    std::cout << knight << std::endl;
    std::cout << werewolf << std::endl;

    werewolf.attack(knight);

    std::cout << knight << std::endl;
    std::cout << werewolf << std::endl;

    std::cout << "----------------------------" << std::endl;

    werewolf.turnIntoWolf();
    werewolf.attack(knight);

    std::cout << knight << std::endl;
    std::cout << werewolf << std::endl;

    std::cout << "----------------------------" << std::endl;
    werewolf.turnIntoHuman();
    std::cout << werewolf << std::endl;

    
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
