#include <iostream>
using namespace std;

string nama, nim, prodi, email, password;
bool valid;
const int MAX_MATKUL = 100;

struct MataKuliah {
    string namaMatkul;
    string namaDosen;
};

void registrasi(){
    cout << endl;
    cout << "Nama: "; cin.ignore(); getline(cin, nama);
    cout << "NIM: "; cin.ignore(); getline(cin, nim);
    cout << "Program Studi: "; cin.ignore(); getline(cin, prodi);
    cout << "Email: "; cin.ignore(); getline(cin, email);
    cout << "Password: "; cin.ignore(); getline(cin, password);
    cout << "Registrasi akun berhasil!\n";
    cout << endl;
}

bool login(){
    string email_login, password_login;
    do
    {
        cout << "Login terlebih dahulu untuk memverifikasi akun Anda!\n";
        cout << "Email: "; cin.ignore(); getline(cin, email_login);
        cout << "Password: "; cin.ignore(); getline(cin, password_login);
        if (email_login == email && password_login == password)
        {
            cout << "Selamat Anda berhasil login!\n";
            cout << endl;
            valid = true;
        }else {
            if (email_login != email)
            {
                cout << "Maaf Email yang Anda masukkan salah!, mohon masukkan kembali Email dan Password!\n";
            }else if (password_login != password)
            {
                 cout << "Maaf Password yang Anda masukkan salah!, mohon masukkan kembali Email dan Password!\n";
            }else if(email_login != email && password_login != password)
            {
                cout << "Maaf Email dan Password yang Anda masukkan salah!, mohon masukkan kembali Email dan Password!\n";
            }
            cout << endl;
            valid = false;
        }
    } while (valid != true);
}

void tambahMatkul(MataKuliah daftarMatkul[], int& numMatkul) {
    MataKuliah matkul;
    cout << "Masukkan Nama Mata Kuliah  : "; cin.ignore(); getline(cin, matkul.namaMatkul);
    cout << "Masukkan Nama Dosen        : "; cin.ignore(); getline(cin, matkul.namaDosen);
    daftarMatkul[numMatkul++] = matkul;
    cout << "Mata Kuliah berhasil ditambahkan!\n";
}

void lakukanPresensi(const MataKuliah daftarMatkul[], const int presensi[], int numMatkul) {
    cout << "Daftar Mata Kuliah:\n";
    for (int i = 0; i < numMatkul; ++i) {
        cout << i + 1 << ". " << daftarMatkul[i].namaMatkul << " (Dosen: " << daftarMatkul[i].namaDosen << ")\n";
    }

    int pilihan;
    cout << "Pilih nomor mata kuliah: ";
    cin >> pilihan;

    if (pilihan >= 1 && pilihan <= numMatkul) {
        cout << "Presensi pada mata kuliah " << daftarMatkul[pilihan - 1].namaMatkul << " berhasil dilakukan.\n";
    } else {
        cout << "Nomor mata kuliah tidak valid.\n";
    }
}

void tampilkanRiwayatPresensi(const MataKuliah daftarMatkul[], const int presensi[], int numMatkul) {
    if (numMatkul == 0) {
        cout << "Maaf, Anda belum menambahkan mata kuliah.\n";
        return;
    }
    cout << "Riwayat Presensi:\n";
    for (int i = 0; i < numMatkul; ++i) {
        cout << "Mata Kuliah: " << daftarMatkul[i].namaMatkul << ", Dosen: " << daftarMatkul[i].namaDosen << endl;
    }
    cout << endl;
}

void berikanPeringatan(const MataKuliah daftarMatkul[], const int presensi[], int numMatkul) {
    bool peringatan = false;
    
    for (int i = 0; i < numMatkul; ++i) {
        if (presensi[i] >= 2) {
            cout << "Anda telah melewatkan 2 kali presensi pada Mata Kuliah " << daftarMatkul[i].namaMatkul << ", maka anda tidak dapat mengikuti UAS.\n";
            peringatan = true;
        }
    }
    if (!peringatan) {
        cout << "Belum ada peringatan yang diberikan.\n";
    }
    cout << endl;
}

int main() {
    char input;
    int numMatkul = 0;
    MataKuliah daftarMatkul[MAX_MATKUL];
    int presensi[MAX_MATKUL] = {0};

    cout << "Program Pocket Sederhana\n";
    do {
        cout << "Sebelum menjalankan fitur lain, anda perlu registrasi akun terlebih dahulu.\n";
        cout << "Registrasi (y/n): ";
        cin >> input; 
    } while (input != 'y');

    if (input == 'y') {
        registrasi();
        login();
        if (valid == true)
        {
            do {
                int pilihan;
                cout << "Pilih fitur yang ingin anda jalankan: \n";
                cout << "1. Menambah Mata Kuliah\n";
                cout << "2. Presensi\n";
                cout << "3. Riwayat Presensi\n";
                cout << "4. Peringatan\n";
                cout << "5. Keluar\n";
                cout << "Masukkan pilihan: ";
                cin >> pilihan;

                switch (pilihan) {
                    case 1:
                        tambahMatkul(daftarMatkul, numMatkul);
                        break;
                    case 2:
                        lakukanPresensi(daftarMatkul, presensi, numMatkul);
                        break;
                    case 3:
                        tampilkanRiwayatPresensi(daftarMatkul, presensi, numMatkul);
                        break;
                    case 4:
                        berikanPeringatan(daftarMatkul, presensi, numMatkul);
                        break;
                    case 5:
                        cout << "Terima kasih telah menggunakan program.\n";
                        exit(0);
                    default:
                        cout << "Pilihan tidak valid, silakan coba lagi!\n";
                        break;
                }
            } while (true);
        }
    }

    return 0;
}