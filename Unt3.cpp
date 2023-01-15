#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Masukkan sebuah angka: ";
	cin >> a;
	
	do{
		a++;
		int b = 1;
		do{
			b++;
			cout << "*";
		} while (b < a);
		cout << "\n";
	}while (a  < 1);
	cout << "\n";
	
	cout << "Masukkan sebuah angka: ";
	cin >> b;
	
	cout << "\n";
	
	do{
		b--;
		int c = 1;
		do{
			c++;
			cout << "*";
		} while (c<b);
		cout << "\n";
	} while (b > 1);
	cout << "\n";
	
	return 0;
}