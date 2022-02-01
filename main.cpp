#include <iostream>
#include <string>
#include "weapon.h"
#include "primary.h"
using namespace std;
//creating COD game-ish

//foward declarations:
class Weapon;

int main(){
	string name;

	cout << "Welcome to COD" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "You entered: " << name << endl;

	Weapon rifle("M4A1", false);
	cout << "creating primary ... " << endl;
	Primary scar("Scar", 30, true);

	return 0;
}

