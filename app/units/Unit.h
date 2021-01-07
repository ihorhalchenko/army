#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <map>
#include <set>
#include "../Exceptions.h"
#include "../damage/Damage.h"
#include "../attacks/IAttack.h"
#include "../attacks/DefaultAttack.h"
#include "../takeDamage/ITakeDamage.h"
#include "../takeDamage/DefaultTakeDamage.h"
#include "../takeDamage/WolfTakeDamage.h"
#include "../counterAttacks/ICounterAttack.h"
#include "../counterAttacks/DefaultCounterAttack.h"
#include "../states/State.h"
#include "../states/DefaultState.h"
#include "../states/werewolf/WerewolfState.h"
#include "../states/werewolf/HumanState.h"
#include "../states/werewolf/WolfState.h"

class IAttack;
class ITakeDamage;
class ICounterAttack;
class State;

#define UNIT_DEFAULT_DAMAGE_VALUE 20
#define UNIT_DEFAULT_HIT_POINTS 100
#define UNIT_DEFAULT_HIT_POINTS_LIMIT 100

class Unit {
    public:
        enum Type {
            TYPE_UNIT,
            TYPE_SPELLCASTER,
            TYPE_BATTLEMAGE,
            TYPE_HEALER,
            TYPE_SOLDIER,
            TYPE_WEREWOLF
        };

    private:
        Damage* m_damage;
        int m_hitPoints;
        int m_hitPointsLimit;
        std::string m_name;
        State* m_state;
        std::set<Type> m_unitTypes;

    protected:
        Unit(const std::string& name, int damageValue = UNIT_DEFAULT_DAMAGE_VALUE, int hitPoints = UNIT_DEFAULT_HIT_POINTS, int hitPointsLimit = UNIT_DEFAULT_HIT_POINTS_LIMIT);
        virtual ~Unit();

        void ensureIsAlive();
        void addUnitType(Type type);
        std::set<Type> getUnitType() const;

    public:
        Damage* getDamage() const;
        int getDamageValue() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;
        State* getState() const;

        void setState(State* state);
        void setHitPoints(int hp);
        void setHitPointsLimit(int hp);
        void setDamageValue(int value);

        void addHitPoints(int hp);
        void reduceHitPoints(int hp);
        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);
        virtual void takeDamage(const Damage& dmg);
        virtual void turnIntoWolf();
        virtual void turnIntoHuman();
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
