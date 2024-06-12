#include<iostream>
using namespace std;

int sumderet(int n, int i = 1){
    if (n %2 == 0)
    {
        if (i = n)
        {
            cout << i << " ";
            return sumderet(n, i+1);
        }
    }
}

int main(){
    int n;

    cout << "Masukkan n: ";
    cin >> n;

    cout << sumderet(n);
    return 0;
}