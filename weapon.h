#include <iostream>
#include <string>
using namespace std;

class Weapon{	
public:
	string name;
	bool melee;


	Weapon(string n, bool m) : name(n), melee(m){
		cout << "Weapon created" << endl;
		this->printInfo();
	}

	void printInfo(){
		cout << "Name: " << this->name << endl;
		cout << "Melee: " << this->melee << endl;
	}

	//getters and setters:
	string getName(){
		return this->name;
	}
	void setName(string name){
		this->name = name;
	}
	bool getMelee(){
		return this->melee;
	}
	void setMelee(bool melee){
		this->melee = melee;
	}

};
