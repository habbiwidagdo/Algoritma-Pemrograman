#include <iostream>
using namespace std;

//mendeklarasikan variabel yang digunakan di dalam tiap fungsi
int kelas = 5, siswa = 10;
int totalsiswa = kelas * siswa;
int kelas12[5][10] = {0};
float totalnilai = 0;

//fungsi yang digunakan untuk mencari nilai rata-rata
float avg(){
    float average;
    //jumlah total nilai siswa kelas 12 di bagi dengan total jumlah siswa
    average = totalnilai / static_cast<float>(totalsiswa);
    return average;
}

//fungsi untuk mencari nilai frekuensi tanpa nilai kembalian
void frekuensi(){
    cout << "Frekuensi nilai: \n";
    //mengecek nilai array 2 dimensi yang sama dengan variabel nilai: 1 sampai 100
    for (int nilai = 1; nilai <= 100; nilai++)
    {
        int frek = 0;
        for (int j = 0; j < kelas; j++)
        {
            for (int i = 0; i < siswa; i++)
            {
                //apabila terdapat nilai yang sama dengan variabel nilai
                //maka, frek akan bertambah 1
                if (kelas12[j][i] == nilai)
                {
                    frek++;
                }
            }
        }
        //menampilkan frekuensi nilai
        if (frek > 0)
        {
            cout << nilai << " = " << frek << endl;
        } 
    }
}

//fungsi tanpa nilai balikin untuk menampilkan nilai modus
void modus(){
    //mendeklarasikan variabel maksimum frekuensi sebagai pembanding dari frekuensi awal
    int maxfrekuensi = 1;
    int n_mod1;
    //variabel ada modus sebagai pemberi nilai true atau false
    bool adaModus = false;
    cout << "Modus: ";
    //mengecek nilai serta menampilkan modus
    for (int nilai = 1; nilai <= 100; nilai++)
    {
        //variabel frek untuk menampung bilangan apabila terdapat nilai yang sama pada array
        int frek = 0;
        for (int j = 0; j < kelas; j++)
        {
            for (int i = 0; i < siswa; i++)
            {
                //mengecek nilai array dengan nilai
                if (kelas12[j][i] == nilai)
                {
                    //menambah nilai 1 pada tiap perulangan jika kondisi array dan nilai sama
                    frek++;
                }
            }
        }
        //jika frek lebih besar dari maksimum frekuensi dan frekuensi
        //tidak sama dengan 1, bernilai benar. Maka akan mengupdate variabel n_mod1 dengan nilai yang baru
        if (frek > maxfrekuensi && frek != 1) {
            maxfrekuensi = frek;
            n_mod1 = nilai;
            //memberi nilai true ke adamodus jika percabangan bernilai benar (terdapat modus)
            adaModus = true;
        }
    }
    //menampilkan n_mod1
    cout << n_mod1 << " ";
    //menampilkan tidak ada modus jika adamodus bernilai tidak ada
    if (!adaModus) {
        cout << "Tidak ada";
    }
    cout << endl;
}

//fungsi yang digunakan untuk menghitung nilai maksimum
int max(){
    //mendeklarasikan variabel m yang digunakan untuk menampung nilai maksimum
    int m;
    //memberi nilai awal m dengan array pertama (baris pertama kolom pertama)
    m = kelas12[0][0];
    //mengecek nilai array
    for (int j = 0; j < kelas; j++)
    {
        for (int i = 0; i < siswa; i++)
        {
            //apabila array pada baris j dan kolom i bernilai >= m maka nilai akan di update
            //dengan nilai array tersebut
            if(kelas12[j][i] >= m){
                m = kelas12 [j][i];
            }
        }
    }
    return m;
}

//fungsi yang digunakan untuk menghitung nilai minimum
int min(){
    //mendeklarasikan variabel n yang digunakan untuk menampung nilai minimum
    int n;
    //memberi nilai awal n dengan array pertama (baris pertama kolom pertama)
    n = kelas12[0][0];
    //mengecek nilai array
    for (int j = 0; j < kelas; j++)
    {
        for (int i = 0; i < siswa; i++)
        {
            //apabila array pada baris j dan kolom i bernilai < n maka nilai akan di update
            //dengan nilai array tersebut
            if(kelas12[j][i] < n){
                n = kelas12 [j][i];
            }
        }
    }
    return n;
}

//fungsi menghitung nilai range antara maksimum dan minimum
int range(int max, int min){
    //deklarasi variabel range untuk menampung nilai rangenya
    int range;
    //mengurangkan nilai variabel max dengan min
    range = max - min;
    return range;
}

//digunakan untuk memberikan grad ke tiap-tiap nilai array
void grading(){
    cout << "Grading nilai siswa kelas 12: \n";
    //mengecek nilai array
    for (int j = 0; j < kelas; j++)
    {
        for (int i = 0; i < siswa; i++)
        {
            //memberikan nilai pada grad = kelas12[j][i]
            int grad = kelas12[j][i];
            //menampilkan grad sesuai dengan range nilai yang telah ditentukan
            if(grad >= 80){
                cout << kelas12[j][i] << " = A - siswa dinyatakan lulus." << endl;
            }else if(grad >= 70){
                cout << kelas12[j][i] << " = B - siswa dinyatakan lulus." << endl;
            }else if(grad >= 60){
                cout << kelas12[j][i] << " = C - siswa dinyatakan lulus." << endl;
            }else if(grad >= 50){
                cout << kelas12[j][i] << " = D - siswa dinyatakan tidak lulus." << endl;
            }else{
                cout << kelas12[j][i] << " = E - siswa dinyatakan tidak lulus." << endl;
            }
        }
    }
}

int main() {
    //memasukkan nilai ke dalam array
    //perulangan pertama untuk mengidentifikasi kelas
    for (int j = 0; j < kelas; j++) {
        cout << "Masukkan nilai-nilai siswa kelas 12-" << j + 1 << ": ";\
        //perulangan kedua untuk mengidentifikasi siswa
        for (int i = 0; i < siswa; i++) {
            //melakukan penginputan nilai yang hanya bisa dari 0 sampai 100
            do {
                cin >> kelas12[j][i];
                //menampilkan tidak valid apabila nilai inputan diluar dari range 0 sampai 100
                if (kelas12[j][i] < 0 || kelas12[j][i] > 100) {
                    cout << "Input tidak valid. Nilai harus antara 0 dan 100. Silakan masukkan kembali." << endl;
                }
            } while (kelas12[j][i] < 0 || kelas12[j][i] > 100);
            //menjumlahkan keseluruhan nilai array
            totalnilai += kelas12[j][i];
        }
    }

    //memanggil tiap-tiap fungsi sesuai dengan permintaan
    cout << "Nilai rata-rata siswa kelas 12: " << avg() << endl;
    frekuensi();
    modus();
    cout << "Nilai max: " << max() << endl;
    cout << "Nilai min: " << min() << endl;
    cout << "Nilai max-min: " << range(max() ,min()) << endl;
    grading();

    return 0;
}