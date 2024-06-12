#include <iostream>
using namespace std;

//deklarasi struct atau variabel baru yang dinamakan "Mahasiswa" yang di dalamnya terdapat 6 variabel primitif
struct mahasiswa {
    int nim;
    int sks;
    string nama;
    string matakuliah;
    string hurufmutu;
    float nilaiKSM;
};

float konversihurufmutu(string hurufmutu) {
    if (hurufmutu == "A")
        return 4.0;
    else if (hurufmutu == "AB")
        return 3.5;
    else if (hurufmutu == "B")
        return 3.0;
    else if (hurufmutu == "BC")
        return 2.5;
    else if (hurufmutu == "C")
        return 2.0;
    else if (hurufmutu == "D")
        return 1.0;
    else if (hurufmutu == "E")
        return 0.0;
    else
        return -1.0;}

void ceknim(int n, int nim){
    
}

int main()
{   
    //deklarasi array untuk penginputan data mahasiswa yang dibutuhkan
    int n;
    cout << "Masukkan Jumlah Mahasiswa: ";
    cin >> n; //user diminta untuk menginput Jumlah Mahasiswa atau n
    
    mahasiswa x[n]; //array mahasiswa
    
    cout << "===========================================" << endl;
    
    //perulangan untuk memudahkan user memasukkan data-data yang dibutuhkan oleh array
    for(int i = 0; i < n; i++){
    cout << "Mahasiwa Nomor " << i + 1 << endl;
    cout << "Masukkan NIM(Nomor Induk Mahasiswa)    :  ";
    cin >> x[i].nim; 
    cout << "Masukkan Nama Mahasiswa                :  ";
    cin.ignore(); getline(cin, x[i].nama); 
    cout << "Masukkan Mata Kuliah                   :  ";
    getline(cin, x[i].matakuliah); 
    cout << "Masukkan SKS                           :  ";
    cin >> x[i].sks;
    cout << "Masukkan Huruf Mutu                    :  ";
    cin >> x[i].hurufmutu;
    
    
    // Menghitung nilai KSM
        float nilaiMutu = konversihurufmutu(x[i].hurufmutu);
        if (nilaiMutu != -1.0) {
            x[i].nilaiKSM = nilaiMutu * x[i].sks;
        } else {
            cout << "Huruf Mutu tidak valid!" << endl;
            return 1; // Menghentikan program jika huruf mutu tidak valid
        }
        
        cout << endl;
    }
    cout << endl;

    // Menampilkan output
    cout << "NIM\t\tNAMA\t\tMATA KULIAH\tSKS\tHURUF MUTU\tNILAI KSM" << endl;
    for(int i = 0; i < n; i++) {
        cout << x[i].nim << "\t";
        cout << x[i].nama << "\t";
        cout << x[i].matakuliah << "\t";
        cout << x[i].sks << "\t";
        cout << x[i].hurufmutu << "\t\t";
        cout << x[i].nilaiKSM << endl;
    }

    cout << endl << endl;
    //untuk mengecek data yang tersimpan pada sistem dengan memasukkan NIM
    cout << "Masukkan NIM yang ingin anda cari      : ";
    int nim;
    cin >> nim;
    bool cek = false;
    for (int i = 0; i < n; i++)
    {
        if (x[i].nim == nim)
        {
            cek = true;
            cout << "Data NIM yang anda inputkan ada pada sistem! \n";
        }
    }
    if (!cek)
    {
        cout << "Maaf data NIM yang anda inputkan tidak ada pada sistem! \n";
    }
return 0;}