#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../attacks/IAttack.h"
#include "../attacks/DefaultAttack.h"
#include "../spells/BattleSpell.h"
#include "../damage/Damage.h"

class IAttack;

class UnitIsDead {};

class Unit {
    private:
        int m_damage;
        int m_hitPoints;
        int m_hitPointsLimit;
        std::string m_name;
        IAttack* m_attackStrategy;
        void ensureIsAlive();
    protected:
        Unit(const std::string& name, int hp, int dmg);
        Unit(const std::string& name, int hp, int dmg, IAttack* attackStrategy);
        ~Unit();
    
    public:
        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;

        void addHitPoints(int hp);
        void takeDamage(int dmg);

        void attack(Unit& enemy);
        void attack(Unit& enemy, BattleSpell& bs);
        void counterAttack(Unit& enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
