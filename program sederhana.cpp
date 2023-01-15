#include <iostream>
using namespace std;
int main() {
   int i=0;
   int x;
   while (true){
   	cout << "Input x: ";
    cin >> x;
    cout << "Value of x:" << x << endl;
    if (x % 5 == 0){
    	continue;
	}
   }
 cout << "Dadah" << endl;
}
