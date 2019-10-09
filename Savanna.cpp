#include "Savanna.h"
#include <iostream>
using namespace std;
string one="Zebra";
string two="Hyena";
string three="Cheetah";
int Savanna::currentID=0;

Savanna::Savanna(){
}

Savanna::Savanna(string SavAnim){
sAnim=SavAnim;
id=currentID++;
}

int Savanna::get_rarity(){
srand(time(NULL));
int randNum = (rand() % 3) + 1;
return randNum;
}

string Savanna::get_animal(int rarity){
switch (rarity){
case 1: return one;
break;
case 2: return two;
break;
case 3: return three;
break;
}
}

int Savanna::get_ID(){
return id;
}

Savanna::~Savanna(){
}
