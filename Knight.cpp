#include "Knight.h"

Knight::Knight(string name, int h, int power, int rating, int bonus) : Hero(name, h, power), Warrior(name, h, power, rating) {
chargeBonus = bonus;
}

int Knight::getChargeBonus()const{return chargeBonus;}

int Knight::calculateBurstDamage() const{
return getPower() + chargeBonus;
}