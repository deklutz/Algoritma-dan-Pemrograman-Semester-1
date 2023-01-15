#include <iostream>
#include <stdio.h>
using namespace std;
int a,banyak;
int bilangan1 = 3, bilangan2 = 7;
int number;
int main (){
	cout << "============================================= \n";
	cout << "PROGRAM MEMBUAT BILANGAN FIBONACCI \n";
	cout << "============================================= \n";
	cout << "Bilangan Fibonacci : Bilangan berurut dengan pola menjumlahkan angka-angka sebelumnya \n";
	cout << "\n";
	cout << "Barisan fibonacci 3 dan 7 \n";
	cout << "Masukkan banyak bilangan: ";
	cin >> banyak;
		 number = bilangan1 + bilangan2;
 		 cout << "Barisan fibonacci : " << bilangan1 << ", " << bilangan2;
 		 for (a=3; a<=banyak; a++){
    	 cout << ", " << number;
   		 bilangan1 = bilangan2;
   		 bilangan2 = number;
   		 number = bilangan1 + bilangan2;
  }
  cout << endl;
	return 0;
}