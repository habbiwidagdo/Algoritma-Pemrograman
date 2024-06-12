/*Kasus 2:  Nilai Mahasiswa
Sebuah program akan menerima input nilai dari 5 mata kuliah yang diambil oleh seorang mahasiswa. 
Nilai yang diterima berkisar antara 0 hingga 100. Program kemudian akan menghitung rata-rata nilai 
mahasiswa dan menentukan status kelulusannya berdasarkan rata-rata nilai tersebut. Jika rata-rata nilai 
mahasiswa di atas atau sama dengan 75, maka mahasiswa tersebut dinyatakan lulus, sedangkan jika rata-rata 
nilai di bawah 75, maka mahasiswa tersebut dinyatakan tidak lulus.

Buatlah program menggunakan konsep perulangan untuk meminta input nilai mata kuliah dan percabangan 
untuk menentukan status kelulusan mahasiswa!
*/

#include<iostream>
using namespace std;

int main(){
    //Menggunakan 2 variabel untuk nilai dan jumlah dari nilai
    float n_nilai = 0;
    float jumlah = 0;

    cout << "*Tugas 1 Algoritma Pemrograman RC Pertemuan 2*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;

    cout << "Silahkan input nilai anda dibawah! \n" << "Note*: Input nilai antara 0 hingga 100 \n";

    //Melakukan konsep perulangan for untuk menginput sebanyak 5 kali
    for (int i = 1; i <= 5; i++)
    {
        //Konsep percabangan if else digunakan untuk melakukan aksi khusus dalam menginput nilai
        if (i == 1)
        {
            cout << "Matematika Dasar: ";
            cin >> n_nilai;
        }else if (i == 2)
        {
            cout << "Fisika Dasar: ";
            cin >> n_nilai;
        }else if (i == 3)
        {
            cout << "Kimia Dasar: ";
            cin >> n_nilai;
        }else if (i == 4)
        {
            cout << "Pengenalan Komputer & Software: ";
            cin >> n_nilai;
        }else if (i == 5)
        {
            cout << "Algoritma Pemrograman: ";
            cin >> n_nilai;
        }
        //Pada baris program ke-55 merupakan operasi untuk menghitung rata-rata dari nilai keseluruhan
        jumlah += n_nilai/5;
        //Konsep percabangan kedua digunakan untuk menyatakan lulus atau tidak
        if (i == 5)
        {
            if (jumlah >= 75)
            {
                cout << "IPK: " << jumlah << endl;
                cout << "Selamat Anda dinyatakan lulus!" << endl;
            }else
            {
                cout << "IPK: " << jumlah << endl;
                cout << "Mohon maaf Anda dinyatakan tidak lulus. Mohon coba kembali di semester selanjutnya!" << endl;
            }
            
        }
    }
    return 0;
}