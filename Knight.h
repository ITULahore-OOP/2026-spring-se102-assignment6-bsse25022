#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_KNIGHT_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_KNIGHT_H

#include "Warrior.h"

class Knight : public Warrior{
int chargeBonus;

public:
Knight(string name, int h, int power, int rating, int bonus);
int getChargeBonus()const;
int calculateBurstDamage() const;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_KNIGHT_H