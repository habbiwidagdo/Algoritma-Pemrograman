#include<iostream>
using namespace std;

struct n_matkul
{
    int panjang;
    string warna;
    string bahan;
    int lebar;
};

int main(){
    n_matkul x;

    cout << "Masukkan Warna: ";
    cin >> x.warna;
    cout << "Masukkan Panjang: ";
    cin >> x.panjang;
    cout << "Masukkan Lebar: ";
    cin >> x.lebar;
    cout << "Masukkan Bahan: ";
    cin >> x.bahan;
    cout << endl;

    cout << "Warna: " << x.warna << endl;
    cout << "Panjang: " << x.panjang << endl;
    cout << "Lebar: " << x.lebar << endl;
    cout << "Bahan: " << x.bahan << endl;
    cout << endl;
    return 0;
}