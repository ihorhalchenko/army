#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "../Unit.h"

class Werewolf : public Unit {
    public:
        Werewolf (const std::string& name);
        virtual ~Werewolf ();

        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);
        virtual void takeDamage(const Damage& dmg);

        void turnIntoWolf();
        void turnIntoHuman();
};

#endif //WEREWOLF_H
