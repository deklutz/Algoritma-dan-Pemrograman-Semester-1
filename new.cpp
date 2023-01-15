#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int b1, k1, b2, k2;
	int okay[3][3] = {{4, 2, 5},{1, 8, 9},{3, 6, 7}};
	cout << "{" << okay[0][0] << " " << okay[0][1] << " " << okay [0][2] << "}" << endl;
	cout << "{" << okay[1][0] << " " << okay[1][1] << " " << okay [1][2] <<"}" << endl;
	cout << "{" << okay[2][0] << " " << okay[2][1] << " " << okay [2][2] << "}" << endl;
	cout << endl;
		cout << "Tukar Array \n";
		cout << "Baris : ";
		cin >> b1;
		cout << "Kolom : ";
		cin >> k1;
		b1--;
		k1--;
		
		
		cout << "dengan Array \n";
		cout << "Baris : ";
		cin >> b2;
		cout << "Kolom : ";
		cin >> k2;
		b2--;
		k2--;
		
		int tmp;
		tmp = okay[b1][k1];
		okay[b1][k1] = okay[b2][k2];
		okay[b2][k2] = tmp;
		cout << "Isi Array Baru: ";
		for (int i = 0; i < 3; i++){
			cout << "{ ";
			for (int j = 0; j < 3 ; j++){
				cout << okay[i][j] << " ";
		}
		cout << "}";
		 
	}
	
	return 0;
}
