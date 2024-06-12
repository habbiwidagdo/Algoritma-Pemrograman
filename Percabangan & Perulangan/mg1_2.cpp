/*Buatlah program yang meminta pengguna untuk
memasukkan N buah bilangan. Kemudian tentukan:
• Nilai minimal
• Nilai maksimal ]*/
#include<iostream>
using namespace std;

int main(){
    int n_loop;
    int n_bil, maks, min;

    cout << "*Tugas Algoritma Pemrograman RC Pertemuan 1*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;

    cout << "Berapa kali anda ingin menginput nilai bilangan? \n" << "Input: ";
    cin >> n_loop;

    cout << "Masukkan bilang ke-1: ";
    cin >> n_bil;

    maks = n_bil;
    min = n_bil;

    for (int i = 2; i <= n_loop; i++)
    {
        cout << "Masukkan bilang ke-" << i << ": ";
        cin >> n_bil;

        if (n_bil > maks){
            maks = n_bil;
        }else if(n_bil < min){
            min = n_bil;
        }
    }
    
    cout << "Nilai minimal: " << min << endl;
    cout << "Nilai maksimal: " << maks << endl;
    return 0;
}