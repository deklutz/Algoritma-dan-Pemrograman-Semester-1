#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
      int i, hasil;
      for (i = 7; i <= 1000; i++)
      {
            if (i%7 == 0){
            	hasil = hasil+i;
            	cout << "bilangan yang habis dibagi 7: " << i << endl;
			}
      }
      cout << "hasil: " << hasil << endl;
      return 0;
      
  }