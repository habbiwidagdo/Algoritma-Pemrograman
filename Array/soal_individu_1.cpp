#include<iostream>
using namespace std;

int main(){
    //mendeklarasikan variabel n untuk menanmpung nilai inputan yang digunakan sebagai jumlah indeks array
    //mendeklarasikan variabel x yang digunakan sebagai bilangan pengurang
    int n, x;

    cout << "Masukkan nilai n: ";
    cin >> n;
    int arr[n];

    cout << "Masukkan nilai x: ";
    cin >> x;

    //menginput nilai ke tiap-tiap indeks
    cout << "Masukkan nilai array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //menampilkan keluaran nilai tiap indeks yang baru secara terbalik dimulai dari nilai variabel n sampai 0
    cout << "Nilai array yang baru: \n";
    //mendeklarasikan variabel kurang bernilai sama dengan bilangan x
    int kurang = x;
    for (int i = n-1; i >= 0; i--)
    {
        //melakukan pengurangan array sebelumnya dengan variabel kurang sebagai bilangan pengurangnya
        arr[i] = arr [i] - kurang;
        //mengupdate nilai dari variabel kurang dengan kelipatan dari bilangan x
        kurang += x;
        cout << arr[i] << " ";
    }
    
    return 0;
}