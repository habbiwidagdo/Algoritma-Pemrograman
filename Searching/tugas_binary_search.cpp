//Nama : Habbi Widagdo
//NIM : 123140204
//Kelas : RC
#include <iostream>
using namespace std;

// Fungsi untuk binary search
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // Jika elemen berada di tengah
        if (arr[mid] == x)
            return mid;

        // Jika elemen lebih kecil dari tengah, cari di bagian kiri
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Jika elemen lebih besar dari tengah, cari di bagian kanan
        return binarySearch(arr, mid + 1, r, x);
    }

    // Jika elemen tidak ditemukan
    return -1;
}

int main() {
    // Array yang akan dicari
    int arr[] = {2, 3, 4, 10, 40};
    // Jumlah elemen dalam array
    int n = sizeof(arr) / sizeof(arr[0]);
    // Elemen yang ingin dicari
    int x = 10; // elemen yang ingin dicari
    // Panggil fungsi binarySearch untuk mencari elemen
    int result = binarySearch(arr, 0, n - 1, x);
    // Tampilkan hasil pencarian
    if (result == -1)
        cout << "Elemen tidak ditemukan";
    else
        cout << "Elemen ditemukan di indeks ke-" << result;
    return 0;
}
