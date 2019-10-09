#ifndef SAVANNA_H
#define SAVANNA_H
#include <string>
#include <iostream>
using namespace std;

class Savanna{

	public:
	Savanna();
	Savanna(std::string SavAnim);
	std::string sAnim;
	int get_rarity();
	string get_animal(int rarity);
	static int ScurrentID;
	int get_ID();
	int randNum;
	int id;
	~Savanna();
};

#endif
