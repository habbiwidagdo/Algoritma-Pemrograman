#include<iostream>
using namespace std;

int kelas = 5, siswa = 10;
int totalsiswa = kelas * siswa;
int kelas12[10][5] = {0};
double totalnilai = 0;

double avg(int nilai, int siswa){
    double average = 0;
    average = nilai/siswa;
    return average;
}

// int freq(int frekuensi[10][5]){
//     int freq[101] = {0};
//     for (int j = 0; j < kelas; j++)
//     {
//         for (int i = 0; i < siswa; i++)
//         {
//             freq[kelas12[j][i]]++;
//         }
//     }
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i > 0)
//         {
//             cout << i << " = " << freq[i] << endl;
//         }
//     }
//     if (freq[101] != 0)
//     {
//         return freq[101];
//     }
// }

int main(){
    for (int j = 0; j < kelas; j++)
    {
        cout << "Masukkan nilai-nilai siswa kelas 12-" << j+1 << ": ";
        for (int i = 0; i < siswa; i++)
        {
            do
            {
                cin >> kelas12[j][i];
            } while (kelas12[j][i] <= 0);
            totalnilai += kelas12[j][i];
        }
    }

    cout << "Nilai rata-rata siswa kelas 12: " << avg(totalnilai, totalsiswa) << endl;
    // cout << freq(kelas12) << endl;
    
    return 0;
}