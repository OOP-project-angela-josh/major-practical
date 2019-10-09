#ifndef SAVANNA_H
#define SAVANNA_H
using namespace std;

class Savanna{

	public:
	Savanna();
	Savanna(string SavAnim);
	string sAnim;
	int get_rarity();
	string get_animal(int rarity);
	static int ScurrentID;
	int id;
	~Savanna();
};

#endif
