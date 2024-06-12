#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
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
    int n;
    do
    {
        cin >> n;
    } while (n < 0);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n-1)
        {
            cout << " > ";
        }
        
    }

    return 0;
}