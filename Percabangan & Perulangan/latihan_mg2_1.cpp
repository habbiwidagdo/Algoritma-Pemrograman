#include<iostream>
using namespace std;

int main(){
    int harga_barang, beli, jumlah_barang, diskon, total;

    cout << "Masukkan harga barang: ";
    cin >> harga_barang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    if (jumlah_barang > 100)
    {
        beli = harga_barang * jumlah_barang;
        diskon = (beli * 15)/100;
    }else
    {
        beli = harga_barang * jumlah_barang;
        diskon = (beli * 5)/100;
    }
    
    total = beli - diskon;

    cout << "Jumlah pembelian: " << beli << endl;
    cout << "Anda mendapatkan diskon: " << diskon << endl;
    cout << "Total pembayaran: " << total << endl;

    return 0;
}