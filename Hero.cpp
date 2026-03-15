#include "Hero.h"

Hero::Hero(string name, int h, int power){
heroName = name;
health = h;
basePower = power;
}

Hero::~Hero(){cout<<"it works"<<endl;}

string Hero::getName()const{return heroName;}
int Hero::getHealth()const{return health;}
int Hero::getPower()const{return basePower;}

void Hero::takeDamage(int damage){
if ((health-damage)<0){health = 0;}
else{health -= damage;}
}

bool Hero::operator>(const Hero &other) const{
if(basePower > other.getPower()){return true;}
else{return false;}
}

int Hero::operator+(const Hero &other) const{
return health + other.getHealth();
}