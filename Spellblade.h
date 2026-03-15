#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_SPELLBLADE_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_SPELLBLADE_H

#include "MagicalEntity.h"
#include "Warrior.h"

class Spellblade : public Warrior, public MagicalEntity{
public:
Spellblade(string name, int h, int power, int rating, int mana, int spell);
int calculateHybridDamage()const;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_SPELLBLADE_H