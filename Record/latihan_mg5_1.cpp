#include<iostream>
using namespace std;

struct n_matkul
{
    int nim;
    string nama;
    string matkul;
    int sks;
    char gradding;
};

int main(){
    n_matkul x[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan NIM: ";
        cin >> x[i].nim;
        cout << "Masukkan Nama: ";
        cin >> x[i].nama;
        cout << "Masukkan Nama Mata Kuliah: ";
        cin >> x[i].matkul;
        cout << "Masukkan SKS: ";
        cin >> x[i].sks;
        cout << "Masukkan Huruf Mutu: ";
        cin >> x[i].gradding;
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "NIM: " << x[i].nim << endl;
        cout << "Nama: " << x[i].nama << endl;
        cout << "Nama Mata Kuliah: " << x[i].matkul << endl;
        cout << "SKS: " << x[i].sks << endl;
        cout << "Huruf Mutu: " << x[i].gradding << endl;
        cout << endl;
    }
    return 0;
}