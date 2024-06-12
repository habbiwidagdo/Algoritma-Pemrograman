#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[5], *p, tmp;
    p =arr;
    
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(*(p+i) > *(p+j)){
                tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
    }
    
    for(int i = 0; i < 5; i++){
        cout << *p << endl;
        p++;
    }
    return 0;
}
