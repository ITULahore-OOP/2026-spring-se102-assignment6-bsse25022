#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_HERO_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_HERO_H

#include <iostream>
#include<string>

using namespace std;

class Hero {
string heroName;
int health;
int basePower;

public:
Hero(string name, int h, int power);
virtual ~Hero();
string getName()const;
int getHealth()const;
int getPower()const;
void takeDamage(int damage);
bool operator>(const Hero &h) const;
int operator+(const Hero &h) const;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_HERO_H