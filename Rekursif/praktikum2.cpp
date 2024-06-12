/*Seorang mahasiswa ingin mencari nilai pangkat dari suatu bilangan secara
rekursif. Bantulah mahasiswa tersebut dengan membuat program rekursif untuk
menghitung nilai pangkat dari suatu bilangan. Dapat dipastikan bahwa bilangan
yang dimasukkan adalah bilangan positif. Jika user memasukkan pangkat negatif,
maka program akan menampilkan “Maaf, pangkat harus positif” tanpa tanda petik!*/

#include<iostream>
using namespace std;

//fungsi rekursif untuk menghitung hasil dari pangkat
int pangkat(int a, int b){
    int hasil;
    //basis
    if (b == 0)
    {
        a = 1;
        return a;
    }
    //rekursif menghitung hasil dari pangkat
    else if (b > 0)
    {
        //mengalikan bilangan dengan fungsi pangkat
        hasil = a * pangkat(a, b-1);
        return hasil;
    }
}

int main(){
    int bil, n;
    //perulangan untuk memastikan user menginput bilangan positif
    do
    {
        cout << "Bilangan: "; cin >> bil;
    } while (bil < 0);
    //menginput pangkat
    cout << "Pangkat: "; cin >> n;
    //menampilkan "Maaf, pangkat harus positif" apabila user menginput pangkat negatif
    if (n < 0)
    {
        cout << "Maaf, pangkat harus positif\n";
    }
    //memanggil dan menampilkan hasil perhitungan hasil pemangkatan di fungsi rekursif 
    else if (n >= 0)
    {
        int hasil;
        hasil = pangkat(bil, n);
        cout << "Hasil " << bil << " pangkat " << n << " adalah " << hasil;
    }
    
    return 0;
}