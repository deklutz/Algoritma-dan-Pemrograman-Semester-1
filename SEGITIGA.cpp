#include<iostream>
using namespace std;
int main()
{
      int baris, i, j;
      cout << "Masukkan jumlah baris: ";
      cin >> baris;
      for (i = 1; i <= baris; i++)
      {
            for (j = i; j < baris; j++)
            {
                  cout << "+";
            }
            for (j = 1; j <= i; j++)
            {
                  cout << "*";
            }
            cout << "\n";
      }
      return 0;
      
  }