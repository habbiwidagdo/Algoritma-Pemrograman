/*Nama: Habbi Widagdo || NIM: 123140204 || Kelas: RC*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//fungsi untuk menentukan pilihan komputer
int komp(){
    //menghasilkan angka acak antara 0 dan 2
    return rand() %3;
}
//prosedur untuk mengecek hasil suit dan menampilkannya
void suit(int a, int b){
    //percabangan untuk menampilkan hasil random komputer
    switch (b)
    {
    case 1:
        cout << "Komputer: Batu \n";
        break;
    case 2:
        cout << "Komputer: Gunting \n";
        break;
    case 3:
        cout << "Komputer: Kertas \n";
        break;
    }
    //menampilkan hasil pilihan user
    switch (a)
    {
    case 1:
        cout << "User: Batu \n";
        break;
    case 2:
        cout << "User: Gunting \n";
        break;
    case 3:
        cout << "User: Kertas \n";
        break;
    }
    //percabangan untuk mengecek hasil suit
    //jika inputan user dan komputer sama maka seri
    if (a == b)
    {
        cout << "Hasil = Seri";
    }
    //menampilkan hasil user menang
    //jika user memilih batu dan komputer gunting
    //jika user memilih gunting dan komputer kertas
    //jika user memilih kertas dan komputer batu
    else if (a == 1 && b == 2 || a == 2 && b == 3 || a == 3 && b == 1)
    {
        cout << "Hasil = User menang";
    }
    //menampilkan hasil komputer menang apabila kondisi sebelumnya tidak memenuhi
    else
    {
        cout << "Hasil = Komputer menang";
    }
    
//fungsi utama
}
int main(){
    //variabel untuk menampung inputan user
    int user;
    //Seeding rand() dengan waktu saat ini untuk menghasilkan nilai 
    //acak yang berbeda setiap kali program dijalankan
    srand(time(0));
    //perulangan untuk memastika user menginput angka yang benar
    do
    {
        //menampilkan pilihan
        cout << "Pilih aksi sesuai angka: \n";
        cout << "1. Batu \n";
        cout << "2. Gunting \n";
        cout << "3. Kertas \n";
        cout << "Pilihlah aksi anda: ";
        //menginput pilihan user
        cin >> user;
        cout << endl;
        //apabila user menginput selain dari pilihan di atas, maka akan menampilkan error
        if (user < 1 || user > 3)
        {
            cout << "Program error! \n";
        }
    } while (user < 1 || user > 3);
    //variabel untuk menampung hasil fungsi random komputer
    int pilihankomp = komp();
    //memanggil fungsi suit dengan parameter inputan user dan hasil random komputer
    suit(user, pilihankomp);
    return 0;
}