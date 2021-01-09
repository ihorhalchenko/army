#ifndef HEALER_H
#define HEALER_H

class Spellcaster;

class Healer : public Spellcaster {
    protected:
        Healer(const std::string& name);
        virtual ~Healer();
    
    public:
        void addSpellToBook(Spell* spell);
};

#endif //HEALER_H
