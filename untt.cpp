#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int uang, pembulatan, bayar;

int main(){
	cout << "SELAMAT DATANG PADA PROGRAM KASIR \n";
	cout << "Masukkan jumlah uang: Rp";
	cin >> uang;
	if(uang % 50 != 0 ){
		bayar = uang ;
		cout << "Total pembayaran Rp" << bayar << endl;
		
	}
}