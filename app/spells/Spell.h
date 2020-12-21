#ifndef SPELLS_H
#define SPELLS_H

#include <iostream>

class Spell {
    private:
        std::string m_name;
        int m_value;

    protected:
        Spell(const std::string name, int value);

    public:
        const std::string& getName() const;
        int getValue() const;
}

#endif //SPELLS_H
