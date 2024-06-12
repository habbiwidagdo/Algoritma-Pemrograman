#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    int prodi;
};

int main() {
    Mahasiswa x[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Nama : ";
        cin >> x[i].nama;
        cout << "NIM : ";
        cin >> x[i].nim;
        cout << "Prodi : ";
        cin >> x[i].prodi;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Mahasiswa " << i+1 << endl;
        cout << "Nama : " << x[i].nama << endl;
        cout << "NIM : " << x[i].nim << endl;
        cout << "Prodi : " << x[i].prodi << endl;
    }
    return 0;
}
