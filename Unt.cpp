#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int x = 0;
int main(){
	cout << "Masukkan jumlah anak ayam: ";
	cin >> x;
	while (x > 1){
		cout << "Anak ayam turun " << x << " Mati satu tinggal " << x-1 << endl;
		x--;
	}
	cout << "Mati 1 tinggal induknya" << endl;
	return 0;
}