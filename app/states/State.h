#ifndef STATE_H
#define STATE_H

#include <iostream>

class Unit;
class Damage;
class Demon;

class State {
    public:
        enum Name {
            STATE_DEFAULT,
            STATE_WEREWOLF_HUMAN,
            STATE_WEREWOLF_WOLF,
            STATE_VAMPIRE,
            STATE_PRIEST,
            STATE_BERSERKER,
            STATE_NECROMANCER,
            STATE_WARLOCK
        };

    private:
        Unit* m_unit;
        Name m_name;

    protected:
        Unit* getUnit() const;
        void setName(Name name);

    public:
        State(Unit* unit);
        virtual ~State();
        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(const Damage& dmg);
        
        virtual void turnIntoWolf();
        virtual void turnIntoHuman();
        virtual void transform(Unit* unit);
        virtual Demon callDemon(const std::string& name);

        Name getName() const;
};

#endif //STATE_H
