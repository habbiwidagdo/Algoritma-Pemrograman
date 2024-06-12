#include <iostream>
using namespace std;

struct buku{
    string nama;
    int nomor;
    int rating;
};

void tambahBuku(buku Databuku[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nomor buku: ";
        cin >> Databuku[i].nomor;
        cin.ignore();
        cout << "Masukkan nama buku: ";
        getline(cin, Databuku[i].nama);
        cout << "Masukkan penilaian: ";
        cin >> Databuku[i].rating;
    }

    cout << "Buku berhasil ditambahkan!\n";
}

void tampilkanBuku(buku Databuku[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "Nomor Buku : " << Databuku[i].nomor << endl;
        cout << "Nama Buku : " << Databuku[i].nama << endl;
        cout << "Rating Buku : " << Databuku[i].rating << endl;
    }
}

void displaymenu(){
    cout << "Menu :\n";
    cout << "1. Tambahkan Buku\n";
    cout << "2. Tampilkan Buku\n";
    cout << "3. Hapus Buku\n";
    cout << "4. Urutkan Buku\n";
    cout << "5. Cari Buku\n";
    cout << "6. Keluar\n";
}

int main() {
    const int max_buku = 100;
    buku Databuku[max_buku];
    int jumlah;

    cout<<"Masukkan jumlah data buku : ";
    cin >> jumlah;

    if (jumlah > max_buku) {
        cout << "Jumlah daftar buku sudah penuh";
        return 1;
    }

    int pilihan;
    do {
        displaymenu();
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahBuku(Databuku, jumlah);
                break;
            case 2:
                tampilkanBuku(Databuku, jumlah);
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:
                cout << "Keluar.\n";
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != 6);

    return 0;
}