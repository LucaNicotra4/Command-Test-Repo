#include <iostream>
#include <string>
#include "weapon.cpp"
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

	Weapon rifle("M4A1", true, true);

}

int add(int a, int b){
	return a + b;
}

int subtract(int a, int b){
	return a - b;
}

int multiply(int a, int b){
	return a * b;
}

double divide (int a, int b){
	return a / b;
}
