#include "Savanna.h"
#include <string>
#include <iostream>
using namespace std;
char SanimArr[3][10]={"Zebra","Hyena","Cheetah"};
int Savanna::ScurrentID=1;

Savanna::Savanna(){
}

Savanna::Savanna(std::string SavAnim){
sAnim=SavAnim;
id=ScurrentID++;
}

int Savanna::get_rarity(){
srand(time(NULL));
int randNum = (rand() % 3) + 1;
return randNum;
}

string Savanna::get_animal(int rarity){
switch (rarity){
case 1: return SanimArr[0];
break;
case 2: return SanimArr[1];
break;
case 3: return SanimArr[2];
break;
}
}

int Savanna::get_ID(){
return id;
}

Savanna::~Savanna(){
}
