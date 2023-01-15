#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int Array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "Isi Array : "; 
	for (int i = 0; i < 10; i++){
		cout << " " << Array[i];
	}
		int tmp;
			tmp = Array[4];
			Array [4] = Array [9];
			Array [9] = tmp;
				
	cout << "\n";
	cout << "Tukar array ke 4 dan 9 \n";
	cout << "Isi Array : ";
	for (int j = 0; j < 10; j++){
		
		cout << " " << Array[j];
		
		}
	return 0;
}
