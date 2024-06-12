#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void identifikasi(int n){
    if(n %2 == 0 && n > 0){
        cout << "genap dan positif";
    }
    else if(n %2 == 0 && n < 0){
        cout << "genap dan negatif";
    }
    else if(n %2 != 0 && n < 0){
        cout << "ganjil dan negatif";
    }
    else if(n %2 != 0 && n > 0){
        cout << "ganjil dan positif";
    }
    else if(n == 0){
        cout << "nol";
    }
}

int main(){
    int n;
    cin >> n;
    identifikasi(n);
}