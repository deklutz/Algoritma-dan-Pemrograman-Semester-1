#include <iostream>
using namespace std;

int main (){
	// This is a comment
	/* The code below will prisnt the words Hello World! to the screen, and it's amazing */
	int a, b;
	cout << "Type a number: \t"; //Type a number and press enter
	cin >> a; //Get user input from the keyboard
	cout << "Type another number: \t"; //Type another number and press enter
	cin >> b;
	cout << "The result is: \t" << a + b;
	return 0;
}