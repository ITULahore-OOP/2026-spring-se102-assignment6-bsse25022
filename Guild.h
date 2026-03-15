#ifndef INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_GUILD_H
#define INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_GUILD_H

#include "Hero.h"

class Guild {
string guildName;
Hero* roster[15];
int memberCount;

public:
Guild (string name);
~Guild();
int calculateTotalGuildPower();
void displayGuildStats();
void operator+=(Hero* newHero);
friend ostream& operator<<(ostream& os, const Guild& g);
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT6_BSSE25022_GUILD_H