#ifndef WIZARD_H
#define WIZARD_H

#include "../spellcasters/Battlemage.h"

class Wizard : public Battlemage  {
    public:
        Wizard(const std::string& name);
        virtual ~Wizard();
};

#endif //WIZARD_H
