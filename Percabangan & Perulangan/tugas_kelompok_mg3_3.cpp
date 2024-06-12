#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Jumlah Mahasiswa : ";
    cin >> n;
    cout << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Input nilai Mahasiswa ke-" << i+1 << " : ";
        cin >> arr[i];
        // cout << "Nilai Mahasiswa ke-" << i+1 << " : " << arr[i];
    }
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap jika nilaiMahasiswa[j] lebih besar dari nilaiMahasiswa[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << endl;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nilai ke-" << i+1 << " : " << arr[i] << endl;
        total += arr[i];
    }
    cout << endl << "Jumlah nilai : " << total << endl;
    
    int average = 0;
    average = total / n;
    cout << "Rata-rata nilai : " << average;

    return 0;
}