#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int okay[3][3] = {{4, 2, 5},{1, 8, 9},{3, 6, 7}};
	cout << "{" << okay[0][0] << " " << okay[0][1] << " " << okay [0][2] << "}" << endl;
	cout << "{" << okay[1][0] << " " << okay[1][1] << " " << okay [1][2] <<"}" << endl;
	cout << "{" << okay[2][0] << " " << okay[2][1] << " " << okay [2][2] << "}" << endl;
	return 0;
}