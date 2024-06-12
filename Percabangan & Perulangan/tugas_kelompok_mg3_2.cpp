#include <iostream>
using namespace std;
int main(){
    int i;
    int nilai [5];
    int n_tertinggi = 0; 
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;
    cout << "Nilai ALPRO \n";
    //Perulangan untuk menginput nilai ke dalam setiap elemen dengan dibatasi sebanyak 5 elemen
    for(i=0; i<5; i++){
        cout << "Masukkan Nilai ke-" << i + 1 << " : ";
        //Menginput nilai ke dalam setiap elemen dengan dimulai dari indeks ke-0 s.d ke-4
        cin >> nilai[i];
    }
    //Deklarasi dan mengisi nilai ke dalam variabel untuk menentukan nilai teertinggi dan terendah
    n_tertinggi = nilai[0];
    int n_rendah1 = nilai[0];
    int n_rendah2 = nilai[0];
    //Perulangan untuk menentukan nilai tertinggi dan terendah yang dimulai dari indeks ke-0 s.d ke-4
    for(i=1; i < 5; i++){
        //Percabangan untuk menentukan nilai tertinggi
        //Yang berisi apa bila pada indeks awal/sebelumnya lebih besar dari nilai dari variabel n_tertinggi
        if (nilai[i] > n_tertinggi)
        {
            //Mengupdate variabel n_tertinggi dengan array
            n_tertinggi = nilai[i];
        }
        //Percabangan untuk menentukan nila terendah
        //Memiliki kondisi jika array nilai awal/sebelumnya lebih rendah dari variabel rendah
        else if(nilai[i] < n_rendah1)
        {
            //Mengupdate variabel rendah 1 dan 2 dengan nilai terbaru
            n_rendah2 = n_rendah1;
            n_rendah1 = nilai[i];
        }
    }
    
    cout << endl << "Nilai terbesar mahasiswa : " << n_tertinggi << endl << endl;
    cout << "Hanya menampilkan 2 nilai terendah \n";
    cout << "Nilai ke-1 : " << n_rendah1 << endl;
    cout << "Nilai ke-2 : " << n_rendah2 << endl;
}
