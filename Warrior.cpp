#include "Warrior.h"

Warrior::Warrior(string name, int h, int power, int rating) : Hero(name, h, power){
armorRating = rating;
}

int Warrior::getArmor()const{return armorRating;}

int Warrior::calculateEffectiveHealth() const{
return getHealth() + (armorRating * 2);
}