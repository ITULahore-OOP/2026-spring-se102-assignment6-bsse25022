#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_MAGICALENTITY_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_MAGICALENTITY_H

#include "Hero.h"

class MagicalEntity : virtual public Hero{
int manaPool;
int spellPower;

public:
MagicalEntity(string name, int h, int power, int mana, int spell);
int getMana() const;
int getSpellPower() const;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_MAGICALENTITY_H