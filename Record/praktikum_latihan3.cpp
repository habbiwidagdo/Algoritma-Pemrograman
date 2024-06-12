/*Nama : Habbi Widagdo || NIM : 123140204 || Kelas : RC*/
#include <iostream>
using namespace std;

// Deklarasi fungsi record untuk properti yang diperlukan karyawan
struct rekap_karyawan {
    string nama;
    int umur;
    int ak = 0;
    int ss = 0;
};

// Deklarasi fungsi record untuk menyimpan atribut karyawan yang lolos seleksi
struct rekap_lulus {
    string n_lulus;
    int u_lulus = 0;
    int ak_lulus = 0;
    int ss_lulus = 0;
};

int main () {
    
    //Deklarasi variabel untuk menentukan banyak calon karyawan
    int n;
    
    //Menginput jumlah calon karyawan
    cout << "Jumlah calon karyawan: "; 
    cin >> n;

    // Pemanggilan fungsi record array rekap_karyawan dengan array untuk menyimpan properti mereka sebanyak n di fungsi utama
    rekap_karyawan x[n];
    
    // Pemanggilan fungsi record rekap_lulus menyimpan properti karyawan yang lolos seleksi lalu dicetak pada fungsi utama
    rekap_lulus y;
    
    //Menginput atribut tiap calon karyawan dengan bantuan for loop dengan dibatasi oleh inputan user
    for (int i = 0; i < n; i++)
    {
        cout << "Nama CK     " << i + 1 << " : "; cin.ignore(); getline(cin, x[i].nama);
        cout << "Umur CK     " << i + 1 << " : "; cin >> x[i].umur;
        cout << "Nilai AD CK " << i + 1 << " : "; cin >> x[i].ak;
        cout << "Nilai SS CK " << i + 1 << " : "; cin >> x[i].ss;
    }

    //mengecek properti CK untuk yang lolos seleksi kriteria yang telah ditentukan
    for (int i = 0; i < n; i++)
    {
        // Percabangan untuk memeriksa apakah CK memenuhi kriteria
        if (x[i].umur < 30 && x[i].ak >= 200 && x[i].ss >= 300)
        {
            // Percabanagn untuk memeriksa apakah karyawan memiliki nilai total lebih tinggi dan umur lebih besar dari yang data sebelumnya yang lolos
            if (x[i].ak + x[i].ss > y.ak_lulus + y.ss_lulus && x[i].umur > y.u_lulus) 
            {
                // Pendefinisian ulang terhadap z.karyawan lulus untuk simpan atribut CK yang lolos seleksi
                y.n_lulus = x[i].nama;
                y.u_lulus = x[i].umur;
                y.ak_lulus = x[i].ak;
                y.ss_lulus = x[i].ss;
            }
        }
    }

    // Part mencetak hasil karyawan yang berhasil terseleksi
    cout << endl;
    // Percabangan untuk memeriksa jika var z.N_lulus tidak kosong lalu mencetak hasil CK yang lulus seleksi
    if (y.n_lulus != "") {
        cout << "== Hasil Seleksi Calon Karyawan ==" << endl;
        cout << "Nama     : " << y.n_lulus << endl;
        cout << "Umur     : " << y.u_lulus << endl;
        cout << "Nilai AD : " << y.ak_lulus << endl;
        cout << "Nilai SS : " << y.ss_lulus << endl;
        cout << endl;
        cout << "Selamat, Calon Karyawan atas nama " << y.n_lulus << " dinyatakan lolos!" << endl;
    }    
    // Part mencetak jika tidak ada seorang pun CK yang memenuhi kriteria lolos seleksi
    else {
        cout << "Tidak ada calon karyawan yang lolos seleksi" << endl;
    }

    return 0;
}