#include <iostream>
#include <string>
using namespace std;

class Primary : public Weapon {
public:
	int magSize;
	bool sight;

	//Primary Weapon constructor
	// : Weapon() is calling super constructor
	Primary(string name, int a, bool b) : Weapon(name, false), magSize(a), sight(b) {
		cout << "Primary created with : " << endl;
		cout << "MagSize: " << magSize << endl;
		cout << "Sight: ";
		if(sight){
			cout << "yes";
		};
		if(!sight){
			cout << "no";
		};
		cout << endl;
	}
};