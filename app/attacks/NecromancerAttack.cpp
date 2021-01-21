#include "../units/Unit.h"
#include "../Exceptions.h"
#include "../observation/IObserver.h"
#include "../damage/Damage.h"
#include "NecromancerAttack.h"

NecromancerAttack::NecromancerAttack() {}
NecromancerAttack::~NecromancerAttack() {}

void NecromancerAttack::attack(Unit& attacker, Unit& enemy, const Damage& dmg) {
    IObserver* attackerObserver = dynamic_cast<IObserver*>(&attacker);
    
    if ( attackerObserver ) {
        enemy.subscribe(attackerObserver);
    } else {
        throw isNotObserver();
    }
    
    enemy.takeDamage(dmg);
    enemy.counterAttack(attacker);
}
