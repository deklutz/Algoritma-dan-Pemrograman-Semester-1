#include <iostream>
#include <string>
using namespace std;

int main(){
 	int banyak, panggil;
 	cout << "Program array of string | Memanggil Mahasiswa" << endl;
 	cout << "Masukan banyak mahasiswa : ";
 	cin >> banyak;
 	string nama[banyak];
 	
 	for (int i = 0; i < banyak; i++){
 		cout << "Masukan mahasiswa ke-" << i+1 << " : ";
 		cin >> nama[i];
	 }
	cout << "Panggil mahasiswa ke : ";
	cin >> panggil;
	cout << "Nama yang dipanggil : " << nama[panggil-1];
 	return 0;
}
