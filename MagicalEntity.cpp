#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(string name, int h, int power, int mana, int spell) : Hero(name, h, power){
manaPool = mana;
spellPower = spell;
}

int MagicalEntity::getMana() const{return manaPool;}
int MagicalEntity::getSpellPower() const{return spellPower;}