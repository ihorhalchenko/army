#ifndef HEALER_H
#define HEALER_H

#include "../spellcasters/HealerMage.h"

class Healer : public HealerMage {
    public:
        Healer(const std::string& name);
        virtual ~Healer();
};

#endif //HEALER_H
