#include<iostream>
using namespace std;

int main(){
    int n, total = 0;

    cout << "*Tugas Algoritma Pemrograman RC Pertemuan 2*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;

    cout << "Masukkan nilai loop: ";
    cin >> n;

    cout << "Nilai: ";
    for (int i = 1; i <= n; ++i)
    {
        cout << i << " ";
        total += i;
    }
    cout << endl << "Total: " << total;
 }