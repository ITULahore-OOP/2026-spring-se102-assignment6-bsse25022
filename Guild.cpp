#include "Guild.h"

Guild::Guild (string name){
guildName = name;
for(int i = 0; i < 15; i++) {
 roster[i] = nullptr;
}
memberCount = 0;
}

Guild::~Guild(){
 for (int i = 0; i < memberCount; i++) {
  if (roster[i] != nullptr) {
   roster[i] = nullptr;
  }
 }
cout<<"The guild "<<guildName<<" has been disbanded!"<<endl;
}

int Guild::calculateTotalGuildPower(){
 int totalP = 0;
 for (int i = 0; i < memberCount; i++) {
  totalP += roster[i]->getPower();
 }
 return totalP;
}

void Guild::displayGuildStats(){
 cout << "--- Guild Stats ---" << endl;
 cout << "Guild Name: " << guildName << endl;
 cout << "Total Members: " << memberCount << "/15" << endl;
 cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
 cout << "------------------------" << endl;
}

void Guild::operator+=(Hero* newHero){
if (memberCount < 15){
 roster[memberCount] = newHero;
 memberCount++;
}
else{cout<<"Guild is at full capacity!\n";}
}

ostream& operator<<(ostream& os, const Guild& g){
 os << "Guild: " << g.guildName << endl;
 os << "Members: " << g.memberCount << endl;
   for (int i = 0; i < g.memberCount; i++) {
     os << "- " << g.roster[i]->getName()<< " (Power: " << g.roster[i]->getPower() <<")"<< endl;
   }
 return os;
}