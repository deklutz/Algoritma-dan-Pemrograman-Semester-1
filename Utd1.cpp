#include <iostream>
using namespace std;
int main()
{
    const int tambah = 1, kurang = 2; //untuk nilai constanta
    int op1 = 4, op2 = 2, hasil; //deklarasi operand untuk menghitung
    string buatOperator;
    int pil_kondisi;
    cout << "1. tambah n2. Kurang" << endl;
    cout << "Masukan pilihan : ";
    cin >> pil_kondisi;

    switch(pil_kondisi){
        case tambah:
            hasil = op1 + op2;
            buatOperator = " + ";
            break;
        case kurang:
            hasil = op1 - op2;
            buatOperator = " - ";
            break;
        default:
            cout << "Pilihan yang anda masukan salah !" << endl;
            break;
    }
    // Buat Outputnya
    cout << "Hasil dari " << op1 << buatOperator << op2 << " = " << hasil << endl;

    return 0;
}