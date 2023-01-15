#include <iostream>
using namespace std;

int main(){
	int ARnilai [5];
	int nilai = 0;
	cout << "Isi Array \n ";
	for (int i=0; i < 5; i++){
		cout << "Isi Indeks ke ["<<i<<"] = ";
		cin >> ARnilai[i];
	}
	for (int i=0; i<5; i++){
		nilai = nilai + ARnilai[i];
	}
	cout << " \n Hasil penjumlahan semua elemen array : " << nilai;
	return 0;
}