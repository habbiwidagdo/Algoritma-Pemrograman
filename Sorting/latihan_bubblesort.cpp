#include<iostream>
using namespace std;

void bubblesort(int arr[], int awal, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(){
    cout << "Jumlah barang: \n";
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << "Harga barang ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    
    bubblesort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}