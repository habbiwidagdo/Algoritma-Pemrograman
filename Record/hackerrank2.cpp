#include <iostream>
using namespace std;

struct bruh {
    string nama;
    int nim;
    int nilai;
};


int main() {
    int n;
    int besar, kecil;
    
    cin >> n;
    
    bruh siswa[n];
    
    for(int i = 0; i < n; i++) {
        cin >> siswa[i].nama;
        cin >> siswa[i].nim;
        cin >> siswa[i].nilai;
    }
    
    besar = kecil = siswa[0].nilai;
    
    for(int i = 0; i < n; i++) {
        if(siswa[i].nilai > besar) {
            besar = siswa[i].nilai;
        }
        if(siswa[i].nilai < kecil) {
            kecil = siswa[i].nilai;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(siswa[i].nilai == besar) {
            cout << "nilai tertinggi\n";
            cout << "Nama : " << siswa[i].nama << endl;
            cout << "NIM : " << siswa[i].nim << endl;
            cout << "Nilai : " << siswa[i].nilai << endl << endl;
        }
        
        if(siswa[i].nilai == kecil) {
            cout << "nilai terendah\n";
            cout << "Nama : " << siswa[i].nama << endl;
            cout << "NIM : " << siswa[i].nim << endl;
            cout << "Nilai : " << siswa[i].nilai << endl;
        }
    }
    
    
    
 return 0;
}