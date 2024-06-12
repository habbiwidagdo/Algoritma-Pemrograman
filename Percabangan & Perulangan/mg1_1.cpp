/*Buatlah program untuk melakukan operasi aritmatika. Pengguna dapat memilih
operasi aritmatika yang diinginkannya dengan ketentuan:
➢ Angka 1 : Penjumlahan
➢ Angka 2 : Pengurangan
➢ Angka 3 : Perkalian
➢ Angka 4 : Pembagian
Jika pilihan yang dimasukkan bukan angka 1 s.d 4 muncul pesan

"Kesalahan
memasukkan pilihan". Input: angka 1 s.d 4. Output: hasil operasi aritmatika sesuai
pilihan.*/

#include <iostream>
using namespace std;

int main(){
    char input, confirm;
    float nilai1, nilai2, hasil;

    do
    {
    cout << "*Tugas Algoritma Pemrograman RC Pertemuan 1*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;
    cout << "Program Operasi Aritmatika" << endl << "Input pilihan  sesuai dengan operasi aritmatika yang diinginkan \n" << endl; 
    cout << "- Angka 1 : Penjumlahan\n" << "- Angka 2 : Pengurangan\n" << "- Angka 3 : Perkalian\n" << "- Angka 4 : Pembagian\n" << endl;
    cout << "Note*: Cukup input angka sesuai dengan keterangan operasi aritmatika yang diinginkan\n";
    cout << "Inputan: ";
    cin >> input;
    
    while (input != '1' && input != '2' && input != '3' && input != '4'){
        cout << endl << "Maaf! Kesalahan memasukkan pilihan.\n" << "Mohon untuk memasukkan pilihan kembali!\n" << endl;
        cout << "Note*: Cukup input angka sesuai dengan keterangan operasi aritmatika yang diinginkan\n";
        cout << "Inputan: ";
        cin >> input;
    }

    cout << endl << "Input nilai pertama: ";
    cin >> nilai1;
    cout << "Input nilai kedua: ";
    cin >> nilai2;
    
    if (input == '1')
    {
        hasil = nilai1 + nilai2;
    }else if (input == '2')
    {
        hasil = nilai1 - nilai2;
    }else if (input == '3')
    {
        hasil = nilai1 * nilai2;
    }else if (input == '4')
    {
        hasil = nilai1 / nilai2;
    }
    
    cout << "Hasil dari operasi aritmatika yang telah dilakukan adalah: " << hasil << endl;
    cout << endl << "Apakah anda masih ingin melakukan operasi perhitungan aritmatika? y/n: ";
    cin >> confirm;
    } while (confirm != 'n');
    cout << "Terimakasih!";
    
    return 0;
}