#include <iostream>
#include "units/race/Soldier.h"

int main() {
    
    Soldier barbarian("Barbarian");
    Soldier knight("Knight");
    
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
