//Buat program untuk menghitung deret
//S = 1+2+3+4+5+...+n menggunakan function rekursi
#include <iostream>

using namespace std;

//fungsi rekursi
int deret(int a){
    //terminasi
    if(a == 1){
        cout << a;
        return a;
    }
    //rekursi
    else
    {
        int hasil = a+deret(a-1);
        cout << " + " << a;
        return hasil;
    }
}

int main()
{
    //deklarasi variabel angka dan hasil
    int angka, hasil;
    cout<< "menghitung deret: ";
    //memasukkan nilai variabel angka sebagai parameter fungsi
    cin >> angka;
    
    //deklarasi nilai variabel hasil adalah fungsi rekursi
    hasil = deret(angka);
    //menampilkan fungsi rekursi
    cout << "\nhasil dari deret: " << hasil;

    return 0;
}
