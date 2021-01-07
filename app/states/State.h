#ifndef STATE_H
#define STATE_H

#include "../units/Unit.h"

class Unit;
class Damage;

class State {
    public:
        enum Type {
            STATE_DEFAULT,
            STATE_WEREWOLF_HUMAN,
            STATE_WEREWOLF_WOLF
        };

        Unit* m_unit;
        Type m_type;

    protected:
        void setType(Type type);

    public:
        State();
        virtual ~State();
        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(const Damage& dmg);
        virtual void turnIntoWolf();
        virtual void turnIntoHuman();

        void setContext(Unit* unit);
        Type getType() const;
};

#endif //STATE_H
