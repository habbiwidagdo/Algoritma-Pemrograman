/*Nama : Habbi Widagdo || NIM : 123140204 || Kelas : RC*/
#include <iostream>
using namespace std;

//Deklarasi fungsi record yang berisikan variabel dari tiap properti pegawai
struct rekap_pegawai {
    string nama;
    int nip;
    int gaji;
    int absen;
};

int main () {

    //Deklarasi variabel untuk menentukan banyak pegawai
    int n;
    
    //Meminta user untuk memasukkan jumlah calon pegawai
    cout << "Masukkan jumlah pegawai: "; 
    cin >> n;

    //Menampilkan pembatas
    cout << "==========================" << endl;

    //Pemanggilan struct atau fungsi record rekap_pegawai dengan array untuk simpan properti mereka sebanyak n
    rekap_pegawai x[n];

    //Proses menginput properti tiap pegawai dengan bantuan for loop dengan batas yang diinput oleh user
    for (int i = 0; i < n; i++)
    {
        cout << "Input Nama pegawai " << i+1 << " : "; cin.ignore(); getline(cin, x[i].nama);
        cout << "Input NIP pegawai " << i+1 << " : "; cin >> x[i].nip;
        cout << "Input Gaji pegawai " << i+1 << " : "; cin >> x[i].gaji;
        cout << "Input Absen pegawai " << i+1 << " : "; cin >> x[i].absen;
        
    }

    //Proses mencetak properti pegawai beserta rincian gaji bersih dengan bantuan for loop
    for (int i = 0; i < n; i++)
    {   
        //untuk menghitung gaji bersih pegawai
        int gaji_bersih = ((20 - x[i].absen) / 20.0) * x[i].gaji;

        cout << endl;
        cout << "== Gaji Bersih Pegawai " << i+1 << " == " << endl;
        cout << "Nama        : " << x[i].nama << endl;
        cout << "NIP         : " << x[i].nip << endl;
        cout << "Gaji        : " << x[i].gaji << endl;
        cout << "Absen       : " << x[i].absen << endl;
        cout << "Gaji Bersih : " << gaji_bersih << endl;
    }
    
    return 0;
}