#ifndef STATE_H
#define STATE_H

class Unit;
class Damage;

class State {
    private:
        Unit* m_unit;

    protected:
        Unit* getUnit() const;

    public:
        State(Unit* unit);
        virtual ~State();
        virtual void attack(Unit& enemy, const Damage& dmg);
        virtual void counterAttack(Unit& enemy, const Damage& attackDmg);
        virtual void takeDamage(const Damage& dmg);
        virtual void turnIntoWolf();
        virtual void turnIntoHuman();
};

#endif //STATE_H
