#ifndef BATTLEMAGE_H
#define BATTLEMAGE_H

class Spellcaster;

class Battlemage : public Spellcaster {
    protected:
        Battlemage(const std::string& name);
        virtual ~Battlemage();
    
    public:
        void addSpellToBook(Spell* spell);
};

#endif //BATTLEMAGE_H
