#include<iostream>
using namespace std;

int main(){
    char indeks;
    string mk;
    float tugas, uts, uas, n_rata2;

    cout << "*Tugas Algoritma Pemrograman RC Pertemuan 2*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;

    for (int i = 0; i <= 3; i++)
    {
        if (i == 0)
        {
            cout << "Masukkan nama mata kuliah: ";
            cin >> mk;
            cout << "Masukkan nilai tugas: ";
            cin >> tugas;
        }else if (i == 1)
        {
            cout << "Masukkan nilai UTS: ";
            cin >> uts;
        }else if (i == 2)
        {
            cout << "Masukkan nilai UAS: ";
            cin >> uas;
        }else if (i == 3)
        {
            n_rata2 = (tugas + uts + uas)/3;
            cout << mk << endl;
            if (n_rata2 >= 80)
            {
                cout << "Indeks: A";
            }else if (n_rata2 >= 70)
            {
                cout << "Indeks: B";
            }else if (n_rata2 >= 60)
            {
                cout << "Indeks: C";
            }else if (n_rata2 >= 50)
            {
                cout << "Indeks: D";
            }else if (n_rata2 < 40)
            {
                cout << "Indeks: E";
            }    
        }
        
    }
    return 0;
}