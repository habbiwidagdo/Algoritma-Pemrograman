#include<iostream>
using namespace std;

//fungsi rekursif menghitung deret fibonacci ke n
int fibo(int a){
    //basis 1
    if (a == 1)
    {
        //mengembalikan nilai 0 apabila a = 1
        a = 0;
        return a;
    } 
    //basis 2
    else if (a == 2)
    {
        //mengembalikan nilai 1 apabila a = 2
        a = 1;
        return a;
    }
    //rekursif untuk menghitung deret fibonacci ke n 
    else if (a > 2){
        int hasil = (fibo (a-2) + fibo (a-1));
        return hasil;
    }
}

//fungsi utama
int main(){
    int n, hasil;
    //memasukkan bilangan
    cout << "Program menampilkan hasil deret fibonacci ke n\n";
    cout << "Masukkan bilangan bulat n: ";
    cin >> n;

    //menampilkan hasil deret fibonacci ke n
    if (n > 1)
    {
        hasil = fibo(n);
        cout << "Nilai deret fibonacci ke " << n <<" adalah: " << hasil;
    } 
    //menampilkan "Tidak terdefinisi" apabila bilangan yang diimput kurang dari 1
    else if (n < 1)
    {
        cout << "Tidak terdefinisi";
    }
    
    return 0;
}