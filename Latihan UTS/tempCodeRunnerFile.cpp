#include<iostream>
using namespace std;

int main(){
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] != 100)
        {
            cout << arr[i] << " bukan seratus\n";
        }else {
            cout  << arr[i] << " adalah seratus\n";
        }
    }
    return 0;
}