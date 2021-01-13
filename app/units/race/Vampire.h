#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "../Unit.h"

class Vampire : public Unit  {
    public:
        Vampire(const std::string& name);
        virtual ~Vampire();
};

#endif //VAMPIRE_H
