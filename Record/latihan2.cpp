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
    int n;
    cout << "Jumlah data yang ingin diinput: ";
    cin >> n;
    n_matkul x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Warna: ";
        cin.ignore(); getline(cin, x[i].warna);
        cout << "Masukkan Panjang: ";
        cin >> x[i].panjang;
        cout << "Masukkan Lebar: ";
        cin >> x[i].lebar;
        cout << "Masukkan Bahan: ";
        cin.ignore(); getline(cin, x[i].bahan);
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "Warna: " << x[i].warna << endl;
        cout << "Panjang: " << x[i].panjang << endl;
        cout << "Lebar: " << x[i].lebar << endl;
        cout << "Bahan: " << x[i].bahan << endl;
        cout << endl;
    }
    return 0;
}