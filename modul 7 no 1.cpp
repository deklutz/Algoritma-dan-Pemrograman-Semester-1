#include <iostream>
using namespace std;

int main ()
{
	struct {
	int nim;
	string nama;
	string almt; 
	}mahasiswa;
	
	cout<<"Masukan Data Mahasiswa\n";
	cout<<"Masukan Nim     : ";
	cin>>mahasiswa.nim;
	cout<<"Masukan Nama    : ";
	getline(cin,(mahasiswa.nama));
	(cin>>mahasiswa.nama).get();
	cout<<"Masukan Almt    : ";
	getline(cin,(mahasiswa.almt));
	(cin>>mahasiswa.almt).get();
	
	cout<<"\n hasil data \n";
	cout<<"nim        : "<<mahasiswa.nim<<endl;
	cout<<"nama       : "<<mahasiswa.nama<<endl;
	cout<<"alamat     : "<<mahasiswa.almt<<endl;
	
	return 0;
}
