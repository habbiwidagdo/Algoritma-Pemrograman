#include<iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[right - left + 1];

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int a = 0; a < k; a++) {
        arr[left + a] = temp[a];
    }
}

void mergesort (int arr[], int kiri, int kanan){
    if (kiri < kanan)
    {
        int tengah = kiri + (kanan - kiri)/2;
        mergesort (arr, kiri, tengah);
        mergesort (arr, tengah+1, kanan);
        merge (arr, kiri, tengah, kanan);
    }
}

int main(){
    int array[] = {3,2,4,3,9,8,1};
    int size = sizeof(array)/sizeof(array[0]);

    cout << "Elemen Array Sebelum Diurutkan :\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    mergesort(array, 0, size-1);
    cout << endl;
    cout << "Elemen Array Setelah Diurutkan :\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}