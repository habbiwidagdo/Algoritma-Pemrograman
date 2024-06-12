#include <iostream>

using namespace std;

int main(){

    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    int tmp;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }
    cout << arr[0] << endl;
    cout << arr[size] << endl;
    
    return 0;
}