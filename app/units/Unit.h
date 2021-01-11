#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <set>
#include "../macros.h"
#include "../observation/Observable.h"

class State;
class Damage;

class Unit : public Observable {
    public:
        enum Type {
            TYPE_UNIT,
            TYPE_SPELLCASTER,
            TYPE_BATTLEMAGE,
            TYPE_HEALER,
            TYPE_SOLDIER,
            TYPE_WEREWOLF,
            TYPE_WIZARD,
            TYPE_DEMON,
            TYPE_WARLOCK
        };

    private:
        Damage* m_damage;
        int m_hitPoints;
        int m_hitPointsLimit;
        std::string m_name;
        State* m_state;
        std::set<Type> m_unitTypes;

    protected:
        Unit(const std::string& name, int damageValue = UNIT_DAMAGE_VALUE, int hitPoints = UNIT_HIT_POINTS, int hitPointsLimit = UNIT_HIT_POINTS_LIMIT);
        virtual ~Unit();

        void ensureIsAlive();
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

        void addUnitType(Type type);
        void addHitPoints(int hp);
        void reduceHitPoints(int hp);
        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
        void takeDamage(const Damage& dmg);
        void turnIntoWolf();
        void turnIntoHuman();
        void transform(Unit& unit);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
