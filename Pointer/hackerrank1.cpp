#include<iostream>

using namespace std;
int main(){
    int n, x;
    int *z, y = 0;
    z = &x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y += *z;
    }
    cout << y;
}