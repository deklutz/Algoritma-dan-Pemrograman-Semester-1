#include <iostream>
using namespace std;

int main(){
	int angka [5][2]= {{1,20},{2,40},{3,5},{4,89},{5,12}};
	
		for (int i=0; i<=4; i++){
			cout << "\n Nilai pada baris ke-" << i << endl;
		for (int j=0; j<=1; j++){
			cout <<"Array ["<<i<<"]["<<j<<"] : " << angka[i][j];
			cout << endl;
		}
		cout << endl;
		}
	return 0;
}