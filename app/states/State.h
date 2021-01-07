#ifndef STATE_H
#define STATE_H

class Unit;
class Damage;

enum StateType {
    WEREWOLF_HUMAN_STATE,
    WEREWOLF_WOLF_STATE
};

class State {
    private:
        StateType m_stateType;

    protected:
        void setStateType(StateType st);

    public:
        virtual void attack(Unit& attacker, Unit& enemy, const Damage& dmg) = 0;
        virtual void counterAttack(Unit& counterAttacker, Unit& enemy, const Damage& attackDmg) = 0;
        virtual void takeDamage(Unit& unit, const Damage& dmg) = 0;

        StateType getStateType() const;
};

#endif //STATE_H
