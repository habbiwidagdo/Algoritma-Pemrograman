#include<iostream>
using namespace std;

int main(){
    int x[]={5,2,1,4};
    int j=sizeof(x)/sizeof(*x);
    int tmp;

    for (int z = 0; z < j-1; z++)
    {
        if (x[z] > x[z+1])
        {
            tmp = x[z];
            x[z] = x[z+1];
            x[z+1] = tmp;
        }
    }
    
    for (int i = 0; i < j; i++)
    {
        cout << x[i] << " ";
    }
    

    return 0;
}