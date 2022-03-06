#include <iostream>
#include <string>
using namespace std;

class Secondary : public Weapon{

	string ANSI_RESET = "\033[0m";
	string ANSI_RED = "\x1B[31m";
public:
	Secondary(String n, int mag) : Weapon(n, mag, false, false){
		this->printInfo();
	}

	void printInfo(){
		cout << 
	}
}