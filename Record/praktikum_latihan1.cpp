#include<iostream>
using namespace std;

struct Siswa
{
    string nama;
    int umur;
    int absen;
};

void batas(){
    cout << "============================= \n";
}

int main(){
    int n;
    cout << "Masukkan jumlah siswa: ";
    cin >> n;

    Siswa x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Nama: "; cin.ignore(); getline(cin, x[i].nama);
        cout << "Masukkan umur: ";
        cin >> x[i].umur;
        cout << "Masukkan absen: ";
        cin >> x[i].absen;
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        batas();
        cout << "Nama: " << x[i].nama << endl;
        cout << "Umur: " << x[i].umur << endl;
        cout << "absen: " << x[i].absen << endl;
    }
    return 0;
}