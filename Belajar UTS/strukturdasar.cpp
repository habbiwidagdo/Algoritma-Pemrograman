#include<iostream>

using namespace std;

int main(){
    int uts, uas, tugas;
    cout << "Tugas: "; cin >> tugas;
    cout << "UTS: "; cin >> uts;
    cout << "UAS: "; cin >> uas;
    int ntot;
    ntot = tugas*25/100 + uts*30/100 + uas*35/100;
    cout << "Nilai akhir: " << ntot;
    return 0;
}