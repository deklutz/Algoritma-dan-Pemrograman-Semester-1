#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
	
	int a, b;
	int Matriks[2][3]={{1,2,3,},{8,9,7}};
	for (int a=0;a<2;a++){
		cout << "{";
	for (int b=0;b<3;b++){
		cout << Matriks[a][b] <<" ";
		}
		cout << "}";
		cout << endl;
	}
	
	cout << "\n";
	cout << "Tampilkan Array \n";
	cout << "Baris: ";
	cin >> a;
	cout << "Kolom: ";
	cin >> b;
	cout << "\n";
	cout << "Isi Array: " <<Matriks[a-1][b-1]<<endl;
  
  return 0;
}
