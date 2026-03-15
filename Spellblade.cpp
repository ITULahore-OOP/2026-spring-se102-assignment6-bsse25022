#include "Spellblade.h"

Spellblade::Spellblade(string name, int h, int power, int rating, int mana, int spell) : Hero(name, h, power), Warrior(name, h, power, rating), MagicalEntity(name, h, power, mana, spell) {}

int Spellblade::calculateHybridDamage()const{
return (getPower() + getSpellPower());
}