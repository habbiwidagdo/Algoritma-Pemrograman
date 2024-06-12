#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk merepresentasikan mahasiswa.
struct Mahasiswa {
    string nama;
    string nim;
    float nilai;
};

// Fungsi untuk menambahkan data mahasiswa.
void tambahDataMahasiswa(Mahasiswa *mahasiswa, int &jumlahMahasiswa) {
    cout << "Masukkan data mahasiswa:\n";
    cout << "Nama: ";
    cin >> mahasiswa[jumlahMahasiswa].nama;
    cout << "NIM: ";
    cin >> mahasiswa[jumlahMahasiswa].nim;
    cout << "Nilai Ujian: ";
    cin >> mahasiswa[jumlahMahasiswa].nilai;
    jumlahMahasiswa++;
}

// Fungsi untuk mencari data mahasiswa berdasarkan NIM.
void cariDataMahasiswa(const Mahasiswa *mahasiswa, int jumlahMahasiswa, const string &nim) {
    bool ditemukan = false;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        if (mahasiswa[i].nim == nim) {
            cout << "Data Mahasiswa:\n";
            cout << "Nama: " << mahasiswa[i].nama << endl;
            cout << "NIM: " << mahasiswa[i].nim << endl;
            cout << "Nilai Ujian: " << mahasiswa[i].nilai << endl;
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) {
        cout << "Data Mahasiswa dengan NIM " << nim << " tidak ditemukan.\n";
    }
}

// Fungsi untuk menghapus data mahasiswa berdasarkan NIM.
void hapusDataMahasiswa(Mahasiswa *mahasiswa, int &jumlahMahasiswa, const string &nim) {
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        if (mahasiswa[i].nim == nim) {
            for (int j = i; j < jumlahMahasiswa - 1; ++j) {
                mahasiswa[j] = mahasiswa[j + 1];
            }
            jumlahMahasiswa--;
            cout << "Data Mahasiswa dengan NIM " << nim << " berhasil dihapus.\n";
            return;
        }
    }
    cout << "Data Mahasiswa dengan NIM " << nim << " tidak ditemukan.\n";
}

int main() {
    const int MAX_MAHASISWA = 100; // Maksimal jumlah mahasiswa
    Mahasiswa *daftarMahasiswa = new Mahasiswa[MAX_MAHASISWA]; // Array dinamis untuk menyimpan data mahasiswa
    int jumlahMahasiswa = 0; // Jumlah mahasiswa yang sudah ada

    int pilihan;
    string nim;
    bool selesai = false;

    while (!selesai) {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Hapus Data Mahasiswa berdasarkan NIM\n";
        cout << "3. Cari Data Mahasiswa berdasarkan NIM\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                if (jumlahMahasiswa < MAX_MAHASISWA) {
                    tambahDataMahasiswa(daftarMahasiswa, jumlahMahasiswa);
                } else {
                    cout << "Maaf, sudah mencapai batas maksimal mahasiswa.\n";
                }
                break;
            case 2:
                cout << "Masukkan NIM mahasiswa yang ingin dihapus: ";
                cin >> nim;
                hapusDataMahasiswa(daftarMahasiswa, jumlahMahasiswa, nim);
                break;
            case 3:
                cout << "Masukkan NIM mahasiswa yang ingin dicari: ";
                cin >> nim;
                cariDataMahasiswa(daftarMahasiswa, jumlahMahasiswa, nim);
                break;
            case 4:
                selesai = true;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    delete[] daftarMahasiswa; // Hindari kebocoran memori dengan menghapus array dinamis.

    return 0;
}
