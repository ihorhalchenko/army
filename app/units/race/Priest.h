#ifndef PRIEST_H
#define PRIEST_H

#include "../spellcasters/HealerMage.h"

class Priest : public HealerMage {
    public:
        Priest(const std::string& name);
        virtual ~Priest();
};

#endif //PRIEST_H
