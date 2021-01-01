#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "../Unit.h"

class Werewolf : public Unit {
    private:
        IWerewolfState* m_state;
    public:
        Werewolf (const std::string& name);
        ~Werewolf ();

        void setState(IWerewolfState* state);

        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
        void takeDamage(Damage& dmg);
};

#endif //WEREWOLF_H