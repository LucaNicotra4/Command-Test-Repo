#include <iostream>


using namespace std;

int main(){
	cout << "Hello World" << endl;
	int x;
	cout << "Enter a number: ";
	cin >> x;
	cout << "You entered: " << x << endl;
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
