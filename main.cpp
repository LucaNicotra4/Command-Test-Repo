#include <iostream>
#include <string>
#include <stdlib.h>
#include "weapon.h"
#include "primary.h"
using namespace std;
//creating COD game-ish

//foward declarations:
class Weapon;
class Primary;

int main(){
	string name;
	// \x1B[31m \\ refers to text color
	// \033[3;42;30m \\ refers to background color //
	// \033[0m \\ reset
	/*
	printf("\x1B[31mHello\033[0m\t\t");
	printf("\033[3;42;30mHello\033");
	*/
	string ANSI_RESET = "\033[0m";
	string ANSI_RED = "\x1B[31m";
	string ANSI_GREEN_BG = "\033[3;42;30m";

	cout << ANSI_RED << ANSI_GREEN_BG <<"Welcome to COD" << ANSI_RESET << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "You entered: " << name << endl;

	Primary scar("Scar", 30, true, true);

	return 0;
}

