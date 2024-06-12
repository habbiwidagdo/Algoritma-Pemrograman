/*Buatlah program yang meminta pengguna untuk
memasukkan N buah bilangan. Kemudian tentukan:
• Jumlah bilangan ganjil
• Jumlah bilangan genap*/
#include<iostream>
using namespace std;

int main(){
    int n_loop;
    int n_bil;
    int j_genap = 0;
    int j_ganjil = 0;
    char confirm;
    cout << "*Tugas Algoritma Pemrograman RC Pertemuan 1*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;

    do
    {
        cout << "Berapa kali anda ingin menginput nilai bilangan? \n" << "Input: ";
        cin >> n_loop;

        for (int i = 1; i <= n_loop; i++)
        {
            cout << "Masukkan bilang ke-" << i << ": ";
            cin >> n_bil;

            if (n_bil %2 != 0){
                j_ganjil++;
            }else if(n_bil %2 == 0){
                j_genap++;
            }
        }
        
        cout << "Jumlah bilangan ganjil: " << j_ganjil << endl;
        cout << "Jumlah bilangan genap: " << j_genap << endl;
        cout << "Apakah ingin melakukan lagi? y/n: ";
        cin >> confirm;
        cout << endl;
    } while (confirm != 'n');
    return 0;
}