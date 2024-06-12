/*
- Menggunakan struct, buatlah program yang dapat menerima
data input N buah data kendaraan. Nilai N ditentukan
pengguna.
- Data yang ditampung diantaranya No Kendaraan, Nama
Pemilik, Asal Daerah Pemilik, Merk, dan Tahun keluaran.
- Tampilkan data dan jumlah kendaraan yang dibuat pada tahun
2020 keatas dan memiliki merk Honda
*/

#include<iostream>
using namespace std;

struct data_kendaraan
{
    string nama_pemilik;
    string asal_daerah;
    string merk;
    int tahun_keluaran;
    int no_kendaraan;
};


int main(){
    int n;
    int n_kendaraan = 0;
        
    cout << "Masukkan jumlah kendaraan yang ingin didata: "; cin >> n;
    data_kendaraan x[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nomor kendaraan: "; cin >> x[i].no_kendaraan;
        cout << "Masukkan nama pemilik: "; cin.ignore(); getline(cin, x[i].nama_pemilik);
        cout << "Masukkan asal daerah pemilik: "; cin.ignore(); getline(cin, x[i].asal_daerah);
        cout << "Masukkan merk kendaraan: "; cin >> x[i].merk;
        cout << "Masukkan tahun keluaran: "; cin >> x[i].tahun_keluaran;
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i].merk == "Honda" && x[i].tahun_keluaran == 2020)
        {
            n_kendaraan = n_kendaraan + 1;
        }
    }
    cout << "Jumlah kendaraan keluaran tahun 2020 dengan merk Honda: " << n_kendaraan << endl;

    return 0;
}