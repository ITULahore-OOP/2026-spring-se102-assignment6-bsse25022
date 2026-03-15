#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_WARRIOR_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_WARRIOR_H

#include "Hero.h"

class Warrior : virtual public Hero {
int armorRating;

public:
Warrior(string name, int h, int power, int rating);
int getArmor()const;
int calculateEffectiveHealth() const;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_WARRIOR_H