#include<iostream>
using namespace std;

//Fungsi untuk melakukan linear search
//dengan menggunakan tiga parameter
int linearsearh(int arr[], int awal, int target){
    //percabangan untuk melihat apakah nilai pada indeks awal apakah sama dengan target
    //atau tidak
    if (arr[awal]==target)
    {
        //mengembalikan nilai awal
        return awal;
    }
    //percabangan untuk melihat nilai pada array lebih kecil dari target
    else if (arr[awal] < target)
    {
        //melakukan rekursif untuk melakukan perulangan ke kanan dengan menambahkan 1 pada nilai awal
        return linearsearh(arr, awal+1, target);
    }
    //mengembalikan -1 kalau tidak ditemukan
    else 
    {
        return -1;
    }
}

//fungsi utama
int main(){
    //inisialisasi array
    int arr[]={5,8,8,12,15,20,20,20,25};
    //mencari jumlah indeks dengan membagi jumlah bit array keseluruhan dengan bit array ke-0
    int index = sizeof(arr)/sizeof(arr[0]);

    //perulangan untuk menampilkan angka yang ada di dalam array
    cout << "Menampilkan isi array: ";
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    //menginput angka yang ingin dicari
    cout << "Masukkan angka yang ingin anda cari di index ke berapa: ";
    int target;
    cin >> target;

    //inisialisasi variabel hasil untuk memanggil fungsi linear search
    int hasil = linearsearh(arr, 0, target);

    //percabangan apabila angka tidak ditemukan
    if (hasil == -1)
    {
        cout << "Angka tidak ditemukan di array!";
    }
    //percabangan kedua untuk menampilkan hasil yang ditemukan
    else
    {
        cout << "Angka " << target << " ditemukan di indeks ke-" << hasil;
    }
    
    return 0;
}