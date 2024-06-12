#include<iostream>
using namespace std;

int main(){
    int n_loop, n_bil, maks, min, j_ganjil, j_genap;
    cout << "Masukkan bilang ke-1: ";
    cin >> n_bil;

    maks = n_bil;
    min = n_bil;

    for (int i = 2; i <= 5; i++)
    {
        cout << "Masukkan bilang ke-" << i << ": ";
        cin >> n_bil;

        if (n_bil > maks){
            maks = n_bil;
        }else if(n_bil < min){
            min = n_bil;
        }
        if (n_bil %2 != 0){
                j_ganjil++;
        }else if(n_bil %2 == 0){
                j_genap++;
        }
    }
    
    cout << "Nilai minimal: " << min << endl;
    cout << "Nilai maksimal: " << maks << endl;

}