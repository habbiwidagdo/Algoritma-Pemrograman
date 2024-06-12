#include<iostream>

using namespace std;

//record untuk menampung data informasi mahasiswa
struct mahasiswa
{
    string nama;
    string nim;
    float n_ujian;
};

//void untuk menambahkan data mahasiswa ke dalam array dinamis
void tambah_mhs(mahasiswa *mhs, int &N_mhs){
    cout << "Masukkan nama Mahasiswa: ";
    cin.ignore(); getline(cin, mhs[N_mhs].nama);
    cout << "Masukkan NIM Mahasiswa: ";
    getline(cin, mhs[N_mhs].nim);
    cout << "Masukkan nilai ujian Mahasiswa: ";
    cin >> mhs[N_mhs].n_ujian;
    //melakukan increament pada alamat memori jumlah mahasiswa yang digunakan sebagai indeks dari array dinamis
    //berfungsi agar apabila nanti pengguna menginput data baru maka tidak masuk ke dalam indeks yang sama
    N_mhs++;
}

//void untuk menghapus data mahasiswa
void hapus_mhs(mahasiswa *mhs, int &N_mhs, string nim){
    //loop untuk melakukan cek array dinamis dari indeks 0 sampai jumlah mahasiswa terbaru
    for (int i = 0; i < N_mhs; i++)
    {
        //melakukan cek dengan nim, yang apabila nim yang diinput untuk mencari sama dengan nim yang diinput di dalam array dinamis
        //maka program akan berlanjut
        if (nim == mhs[i].nim)
        {
            for (int j = 0; j < N_mhs - 1; j++)
            {
                mhs[j] = mhs[j+1];
            }
            //decreament untuk mengurangi jumlah mahasiswa
            N_mhs--;
            cout << "Data Mahasiswa Berhasil Dihapus\n";
            //apabila hapus data telah selesai, maka program akan kembali ke fungsi main
            return;
        }
    }
    //menampilkan "Data Tidak Ditemukan!" apabila nim yang diinput tidak ada di dalam memori array dinamis
    cout << "Data Tidak Ditemukan!\n";
}

//void mencari data mahasiswa
void cari_mhs(mahasiswa *mhs, int &N_mhs, const string nim){
    //loop untuk melakukan cek array dinamis dari indeks 0 sampai jumlah mahasiswa terbaru
    for (int i = 0; i < N_mhs; i++)
    {
        //melakukan cek dengan nim, yang apabila nim yang diinput untuk mencari sama dengan nim yang diinput di dalam array dinamis
        //maka program akan berlanjut
        if (nim == mhs[i].nim)
        {
            //menampilkan informasi data mahasiswa
            cout <<"Data Ditemukan!\n";
            cout << "Nama: " << mhs[i].nama << endl;
            cout << "NIM: " << mhs[i].nim << endl;
            cout << "Nilai: " << mhs[i].n_ujian << endl;
            return;
        }
    }
    //menampilkan "Data Tidak Ditemukan!" apabila nim yang diinput tidak ada di dalam memori array dinamis
    cout << "Data Tidak Ditemukan!\n";
}

int main(){
    int choice; //variabel untuk menampung pilihan user di menu
    const int MAX_mhs = 100; //jumlah mahasiswa yang ditampung dalam array dinamis (indeks array)
    mahasiswa *mhs = new mahasiswa[MAX_mhs]; 
    int N_mhs = 0; //menginisialisasi jumlah data mahasiswa awal (indeks array)
    string nim; //menampung inputan nim untuk menghapus atau mencari data
    
    //do while memungkinkan pengguna menjalankan program lagi
    do
    {
        //menampilkan menu dan meminta pengguna untuk memasukkan pilihan fitur yang ingin dijalankan
        cout << "Menu: \n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Hapus Data Mahasiswa Berdasarkan NIM\n";
        cout << "3. Cari Data Mahasiswa Berdasarkan NIM\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: "; 
        cin >> choice;
        // switch case untuk menjalankan program sesuai dengan apa yang diinput pengguna
        switch (choice)
        {
            //case 1 memanggil void tambah mahasiswa
            case 1:
                tambah_mhs(mhs, N_mhs);
                break;
            //case 2 memanggil void hapus data mahasiswa dengan nim
            case 2:
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;
                hapus_mhs(mhs, N_mhs, nim);
                break;
            //case 3 memanggil void mencari data mahasiswa dengan nim
            case 3:
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;
                cari_mhs(mhs, N_mhs, nim);
                break;
            //case 4 keluar dari program
            case 4:
                exit(0);
                break;
            //apabila user menginput selain 1, 2, 3, dan 4 akan menampilkan "Inputan Tidak Valid!"
            default:
                cout << "Inputan Tidak Valid! \n";
                break;
        }
        //loop akan berjalan terus sampai user menginput '4'
    } while (choice != 4);

    return 0;
}