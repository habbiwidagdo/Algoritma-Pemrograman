#include<iostream>
using namespace std;

int main(){
    int baris, kolom;
    cout << "Input baris: ";
    cin >> baris;
    cout << "Input kolom: ";
    cin >> kolom;
    
    for (int i = 0; i <= baris; i++)
    {
        for (int j = 1; i <= kolom; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}