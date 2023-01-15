#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int total, uang, kurang;
int main(){
	cout << "=================================== \n";
	cout << "SELAMAT DATANG DI PROGRAM KASIR \n";
	cout << "=================================== \n";
	cout << "Masukkan uang anda: Rp";
	cin >> uang;
	cout << "Masukkan total pembayaran: Rp";
	cin >> total;
		do {
			if (uang < total) {
				cout << "Uang anda kurang Rp" << total - uang << endl;
				cout << "Masukkan uang anda Rp";
				cin >> kurang;
				cout << "Uang anda kembali Rp" << (uang+kurang) - total << endl;
				cout << "Terima kasih sudah berbelanja" << endl;
				break;
			}
			else {
			cout << "Uang anda kembali Rp" << uang - total << endl;
			cout << "Terima kasih sudah berbelanja" << endl;
				break;
			}
} 		while(uang < total);
	getch();
	return 0;
}