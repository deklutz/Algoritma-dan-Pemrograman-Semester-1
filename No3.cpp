#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int banyak;

struct apa{
	string Nama;
	int NIM;
	int Kuis;
	int UTS;
	int UAS;
	
};
 
int main(){
	cout << "Program Menghitung Struktur Nilai Akhir Mahasiswa \n";
	cout << "Masukkan Jumlah Data Mahasiswa : ";
	cin >> banyak;
	cout << "\n";
	apa Mahasiswa[banyak];
	for (int i =  0; i < banyak; i++){
		cout << "Masukkan Nama Mahasiswa : ";
		cin >> Mahasiswa[i].Nama;
		cout << "Masukkan NIM : ";
		cin >> Mahasiswa[i].NIM;
		cout << "Masukkan nilai Kuis : ";
		cin >> Mahasiswa[i].Kuis;
		cout << "Masukkan nilai UTS : ";
		cin >> Mahasiswa[i].UTS;
		cout << "Masukkan nilai UAS : ";
		cin >> Mahasiswa[i].UAS;
		cout << "\n";
			
		}
		cout << "Nama Mahasiswa \t";
		cout << "Nomor Induk Mahasiswa \t";
		cout << "Nilai Kuis \t";
		cout << "Nilai UTS  \t";
		cout << "Nilai UAS  \t";
		cout << "Nilai Akhir \t";
		cout << "Keterangan ";
		cout << "\n";
		
		for (int i =  0; i < banyak; i++){
			int NilaiAkhir = (Mahasiswa[i].Kuis + Mahasiswa[i].UTS + Mahasiswa[i].UAS)/3;
			string Ket;
			cout << Mahasiswa[i].Nama << "\t \t \t" << Mahasiswa[i].NIM << "\t \t" << Mahasiswa[i].Kuis << "\t \t" << Mahasiswa[i].UTS << "\t \t" << Mahasiswa[i].UAS << "\t \t" << NilaiAkhir << "\t \t" ;
			if (NilaiAkhir >= 75){
				cout << "Lulus";
			}
			else{
				cout << "Tidak Lulus";
			}
			return 0;
		}
	
	
	
}