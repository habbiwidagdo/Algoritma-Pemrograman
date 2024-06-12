#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pelamar {
    string nama;
    string pekerjaan;
    int umur;
    long long mahar;
};

int main() {
    // Menyiapkan data pelamar
    vector<Pelamar> dataPelamar = {
        {"Raditya Diki", "Komika", 35, 1000000000},
        {"Atta Geledek", "Youtuber", 25, 1546780000},
        {"Roy Ricis", "Pengusaha", 23, 987130000},
        {"Dilan Da Musibah", "Artis", 21, 1800000000}
    };

    Pelamar jodohTerpilih;
    int X, Y;
    cin >> jodohTerpilih.nama >> jodohTerpilih.pekerjaan >> jodohTerpilih.umur >> jodohTerpilih.mahar;
    cin >> X >> Y;

    for (const auto &pelamar : dataPelamar) {
        if (pelamar.umur >= X && pelamar.umur <= Y) {
            if (jodohTerpilih.umur < X || jodohTerpilih.umur > Y || (pelamar.umur == jodohTerpilih.umur && pelamar.mahar > jodohTerpilih.mahar)) {
                jodohTerpilih = pelamar;
            }
        }
    }

    if (jodohTerpilih.umur >= X && jodohTerpilih.umur <= Y) {
        cout << "Jodoh anda adalah\n";
        cout << "Nama : " << jodohTerpilih.nama << endl;
        cout << "Pekerjaan : " << jodohTerpilih.pekerjaan << endl;
        cout << "Umur : " << jodohTerpilih.umur << endl;
        cout << "Melamarmu dengan mahar : Rp." << jodohTerpilih.mahar << ",-" << endl;
    } else {
        cout << "Selamat mencoba lagi" << endl;
    }

    return 0;
}