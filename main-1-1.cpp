#include <string>
#include <iostream>
#include "Savanna.h"
using namespace std;
int main(){
int choice;
cout<<"Enter a number to choose terrain:"<<endl;
cout<<"1 = Savanna, 2 = Mountain, 3 = Jungle"<<endl;
cin>>choice;
//depending on choice, a certain terrain will be chosen.
switch (choice){
case(1):
Savanna* one=new Savanna("?");
int rare=one->get_rarity();
cout<<rare<<endl;
cout<<one->get_animal(rare)<<endl;
cout<<one->get_ID()<<endl;
delete one;
return 0;
break;

//case(2):
//Mountain* one=new Mountain("?");
//break;


//case(3):
//Jungle* one=new Jungle("?");
//break;
}
}
