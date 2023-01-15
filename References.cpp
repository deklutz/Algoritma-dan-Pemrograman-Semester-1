#include <iostream>
using namespace std;

int main(){
	string mamam = "Nasi";
	string &menu = mamam;
		cout << mamam << endl;
		cout << menu << endl;
				cout << &menu << endl;
}