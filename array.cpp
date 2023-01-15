#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
	int Array[10] = {2, 6, 3, 7, 1, 9, 8, 4, 5, 11};
	cout << "Isi Array : "; 
	for (int i = 0; i < 10; i++){
		cout << " " << Array[i];
	}
	cout << "\n";
	cout << "Tukar array ke-4 dan 9 \n";
	cout << "Isi Array : ";
	for (int j = 0; j < 10; j++){
		int tmp;
		tmp = Array[4];
		Array[4] = Array[9];
		Array[9] = tmp;
		cout << " " << Array[j];
		tmp = Array[j];
		}
	return 0;
}