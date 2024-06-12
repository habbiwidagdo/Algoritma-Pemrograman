#include<iostream>
using namespace std;

int main(){
    int x, y;
    int *z;

    x = 2;
    y = 4;
    z = &x;
    
    cout << &x << endl;
    cout << &y << endl;

    x = x * 2;
    y = *z + 2;
    z = &y;
    *z = y %2;

    cout << "x: " << x << endl;
    cout << "&x: " << &x << endl;
    cout << "y: " << y << endl;
    cout << "&y: " << &y << endl;
    cout << "z: " << z << endl;
    cout << "&z: " << &z << endl;
    cout << "*z: " << *z << endl;
    cout << x%2;

    return 0;
}