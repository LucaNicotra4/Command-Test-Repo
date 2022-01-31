#include <iostream>
#include <string>
using namespace std;

class Weapon{
public:
	string name;
	bool sight;
	bool automatic;

	Weapon(string name, bool sight, bool automatic){
		this->name = name;
		this->sight = sight;
		this->automatic = automatic;
		cout << "Weapon created" << endl;
		this->printInfo();
	}

	printInfo(){
		cout << "Name: " << this->name << endl;
		cout << "Sight: " << this->sight << endl;
		cout << "Automatic : " << this->automatic << endl;
	}
};