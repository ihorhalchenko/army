#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <map>
#include "../Exceptions.h"
#include "../attacks/IAttack.h"
#include "../attacks/DefaultAttack.h"
#include "../takeDamage/ITakeDamage.h"
#include "../takeDamage/DefaultTakeDamage.h"
#include "../counterAttacks/ICounterAttack.h"
#include "../counterAttacks/DefaultCounterAttack.h"
#include "../damage/Damage.h"

class IAttack;
class ITakeDamage;
class ICounterAttack;

class Unit {
    private:
        Damage* m_damage;
        int m_hitPoints;
        int m_hitPointsLimit;
        std::string m_name;
        IAttack* m_attackStrategy;
        ITakeDamage* m_takeDamageStrategy;
        ICounterAttack* m_counterAttackStrategy;

    protected:
        Unit(const std::string& name, int damageValue = 20, int hitPoints = 100, int hitPointsLimit = 100);
        ~Unit();
        
        void setAttackStrategy(IAttack* attackStrategy);
        void setTakeDamageStrategy(ITakeDamage* takeDamageStrategy);
        void setCounterAttackStrategy(ICounterAttack* counterAttackStrategy);

        IAttack* getAttackStrategy() const;
        ITakeDamage* getTakeDamageStrategy() const;
        ICounterAttack* getCounterAttackStrategy() const;

        void ensureIsAlive();
    
    public:
        int getDamageValue() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;

        void addHitPoints(int hp);
        void reduceHitPoints(int hp);
        void takeDamage(Damage& dmg);

        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
