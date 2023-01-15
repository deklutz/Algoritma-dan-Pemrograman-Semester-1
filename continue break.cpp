#include <iostream>
using namespace std;
int main() {
   int I = 0;
   int x;
   while (true){
   	cout << "Input x: " ;
    cin >>  x;
    cout << "Nilai x: " << x << endl;
    if (x % 5 == 0){
    	break;
	}
   }
 cout << "Dadah" << endl;
}
