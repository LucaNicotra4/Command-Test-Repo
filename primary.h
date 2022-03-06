#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


class Primary : public Weapon {
public:
	
	//Primary Weapon constructor
	// : Weapon() is calling super constructor
	Primary(string name, int a, bool b, bool c) : Weapon(name, a, b, c) {
		//cout << ANSI_RED << "Primary created" << ANSI_RESET << endl;
		this->printInfo();
	}

	void printInfo(){
		cout << "Name: " << this->name << endl;
		cout << "MagSize: " << magSize << endl;
		if(automatic) cout << "Automatic: yes" << endl;
		if(!automatic) cout << "Automatic: no" << endl;
	}
};