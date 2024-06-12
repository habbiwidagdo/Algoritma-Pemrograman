//Nama : Habbi Widagdo
//NIM : 123140204
//Kelas : RC

#include<iostream>
using namespace std;

// Fungsi linear search untuk mencari target dalam array
int linearsearch(int arr[], int n, int target){
    // Loop melalui setiap elemen dalam array
    for (int i = 0; i < n; i++)
    {
        // Jika elemen saat ini sama dengan target, kembalikan indeksnya
        if (arr[i] == target)
        {
            return i;
        }
    }
    // Jika target tidak ditemukan, kembalikan -1
    return -1;
}

int main(){
    // Array yang akan dicari
    int arr[]={1,4,5,6,3,2};
    // Jumlah elemen dalam array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Input dari pengguna untuk angka yang ingin dicari
    int cari;
    cout << "Masukkan angka yang ingin anda cari!\n";
    cout << "Angka : "; cin >> cari;

    // Panggil fungsi linearsearch untuk mencari angka dalam array
    int hasil = linearsearch(arr, n, cari);
    // Tampilkan hasil pencarian
    if (hasil != -1)
    {
        cout << "Angka yang anda cari ditemukan!\n";
        cout << "Terdapat di indeks ke " << hasil << endl;
    }
    else
    {
        cout << "Maaf! Angka yang anda cari tidak ditemukan!\n";
    }
    
    return 0;
}
