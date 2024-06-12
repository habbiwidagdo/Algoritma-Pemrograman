#include<iostream>
using namespace std;

void tukarnilai(int a, int b){
    int hasil;
    for (int i = 0; i < b; i++)
    {
        // cout << a
        hasil = a * a;
    }
    
    // if (b > a)
    // {
    //     cout << "a: " << b << endl;
    //     cout << "b: " << a;
    // }else if (b < a)
    // {
    //     cout << "a: " << b << endl;
    //     cout << "b: " << a - a*2;
    // }
}

int main(){
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << endl;
    tukarnilai(a, b);
}