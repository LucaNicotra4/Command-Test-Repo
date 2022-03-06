#include <iostream>
#include <string>
using namespace std;

class Weapon{	
public:
	string name;
	int magSize;
	bool automatic;
	bool sight;

	Weapon(string n, int m, bool a, bool s) : name(n), magSize(m), automatic(a), sight(s){
		cout << "Weapon created" << endl;
	}

	//getters and setters:
	string getName(){
		return this->name;
	}
	void setName(string name){
		this->name = name;
	}
};
