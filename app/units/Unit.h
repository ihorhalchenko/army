#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <map>
#include <set>
#include "../Exceptions.h"
#include "../damage/Damage.h"
#include "../attacks/IAttack.h"
#include "../attacks/DefaultAttack.h"
#include "../attacks/WolfAttack.h"
#include "../takeDamage/ITakeDamage.h"
#include "../takeDamage/DefaultTakeDamage.h"
#include "../takeDamage/WolfTakeDamage.h"
#include "../counterAttacks/ICounterAttack.h"
#include "../counterAttacks/DefaultCounterAttack.h"
#include "../counterAttacks/WolfCounterAttack.h"
#include "../states/State.h"
#include "../states/werewolf/HumanState.h"
#include "../states/werewolf/WolfState.h"

class IAttack;
class ITakeDamage;
class ICounterAttack;

#define UNIT_DEFAULT_DAMAGE_VALUE 20
#define UNIT_DEFAULT_HIT_POINTS 100
#define UNIT_DEFAULT_HIT_POINTS_LIMIT 100

enum UnitType {
    UNIT_TYPE_UNIT,
    UNIT_TYPE_SPELLCASTER,
    UNIT_TYPE_BATTLEMAGE,
    UNIT_TYPE_HEALER,
    UNIT_TYPE_SOLDIER,
    UNIT_TYPE_WEREWOLF
};

class Unit {
    private:
        Damage* m_damage;
        int m_hitPoints;
        int m_hitPointsLimit;
        std::string m_name;
        State* m_state;
        IAttack* m_attackStrategy;
        ITakeDamage* m_takeDamageStrategy;
        ICounterAttack* m_counterAttackStrategy;
        std::set<UnitType> m_unitTypes;


    protected:
        Unit(const std::string& name, int damageValue = UNIT_DEFAULT_DAMAGE_VALUE, int hitPoints = UNIT_DEFAULT_HIT_POINTS, int hitPointsLimit = UNIT_DEFAULT_HIT_POINTS_LIMIT);
        virtual ~Unit();

        void ensureIsAlive();

        void setState(State* state);
        
        void setAttackStrategy(IAttack* attackStrategy);
        void setTakeDamageStrategy(ITakeDamage* takeDamageStrategy);
        void setCounterAttackStrategy(ICounterAttack* counterAttackStrategy);

        IAttack* getAttackStrategy() const;
        ITakeDamage* getTakeDamageStrategy() const;
        ICounterAttack* getCounterAttackStrategy() const;

        void addUnitType(UnitType type);
        std::set<UnitType> getUnitType() const;

    public:
        Damage* getDamage() const;
        int getDamageValue() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;
        State* getState() const;

        void addHitPoints(int hp);
        void reduceHitPoints(int hp);
        
        void setHitPoints(int hp);
        void setHitPointsLimit(int hp);
        void setDamageValue(int value);

        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);
        virtual void takeDamage(const Damage& dmg);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
