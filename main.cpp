#include <iostream>
#include<string>

using namespace std;

#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"

int main()
{
    Guild g("Rohan");
    Hero h1("Eomer", 100, 80);
    g += &h1;

    cout << g;

    Guild *tempGuild = new Guild("Gondor");
    delete tempGuild; 


    return 0;
}