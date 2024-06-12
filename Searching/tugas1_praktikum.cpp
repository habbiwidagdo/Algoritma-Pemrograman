#include<iostream>
using namespace std;

//Fungsi untuk melakukan binary search
//dengan menggunakan 4 parameter
int binarysearch(int arr[], int awal, int akhir, int target){
    //mencari nilai tengah array
    int tengah = awal + (akhir - 1) / 2;
    //percabangan pertama apabila target tepat ada ditengah
    if (arr[tengah] == target)
    {
        return tengah;
    }
    //percabangan kedua apabila target lebih kecil dari nilai tengah
    if (arr[tengah] > target)
    {
        //melakukan rekursif dengan mengurangi nilai akhir dengan 1
        return binarysearch(arr, awal, akhir-1, target);
    }
    //percabangan kedua apabila target lebih besar dari nilai tengah
    else if (arr[tengah] < target)
    {
        //melakukan rekursif dengan menambah nilai akhir dengan 1
        return binarysearch(arr, awal, akhir+1, target);
    }
    //percabangan terakhir apabila angka tidak ditemukan
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
    
    //menginput angka yang ingin dicari
    cout << endl;
    cout << "Masukkan angka yang ingin anda cari di index ke berapa: ";
    int target;
    cin >> target;

    //inisialisasi variabel hasil untuk memanggil fungsi linear search
    int hasil = binarysearch(arr, 0, index-1, target);

    //percabangan apabila angka tidak ditemukan
    if (hasil == -1)
    {
        cout << "Angka tidak ditemukan di array!";
    }

    //percabangan kedua untuk menampilkan hasil yang ditemukan
    else
    {
        cout << "Angka " << target <<" ditemukan di indeks ke-" << hasil;
    }
    
    return 0;
}