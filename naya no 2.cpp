#include <iostream>
#include <string>
using namespace std;

int main(){
	struct mhs {
		int nim;
		string nama; 
		string alamat;
		
	};
	mhs jumlah[50];
	int isi;
	cout<<"Masukkan banyak mahasiswa: ";
	cin>>isi;
	for(int a = 0; a < isi; a++){
		cout<<a+1<<".Masukkan Data Mahasiswa:\n==================================="<<endl;
		cout<<"Masukkan NIM Mahasiswa: ";
		cin>>jumlah[a].nim;
		cout<<"Masukkan Nama Mahasiswa: "<<endl;
		cin>>jumlah[a].nama;
		cout<<"Masukkan Alamat Mahasiswa: "<<endl;
		cin>>jumlah[a].alamat;
	}
	cout<<endl;
	for(int a = 0; a < isi; a++){
		cout<<a+1<<".Tampilkan Hasil Datanya\n================================"<<endl;
	cout<<"NIM : "<<jumlah[a].nim<<endl;
	cout<<"NAMA : "<<jumlah[a].nama<<endl;
	cout<<"ALAMAT : "<<jumlah[a].alamat<<endl;
	}

}
