#include<iostream>
using namespace std;

//Record buah untuk menampung nama buah dan jumlah huruf (karakter)
struct buah
{
    char nama[100];
    int jumlah = 0;
};

//fungsi untuk menukar dua elemen dalam array
void swap(buah &a, buah &b)
{
    buah tmp = a;
    a = b;
    b = tmp;
}

//fungsi untuk melakukan selection sort nama buah berdasarkan jumlah huruf
void selectionsort(buah arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minbuah = i;
        for (int j = i+1; j < n; ++j)
        {
            if (arr[j].jumlah < arr[minbuah].jumlah)
            {
                minbuah = j;
            }
        }
        //memanggil fungsi swap untuk menukar elemen terkecil dengan elemen terbesar
        swap(arr[minbuah], arr[i]);
    }
}

//fungsi untuk menampilkan hasil yang telah diurutkan
void displayurutbuah(buah arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". " << arr[i].nama << endl;
    }
    
}

int main(){
    //variabel n untuk menampung jumlah buah yang ingin diinput
    int n;
    cout << "Jumlah buah : "; 
    //menginput jumlah buah
    cin >> n;
    //menghapus newline karakter dari buffer input
    cin.ignore();
    //deklarasi array buahan dengan konsep record
    buah buahan[n];
    //menghitung ukuran dari array buahan
    int sizearr = sizeof(buahan)/sizeof(buahan[0]);
    //for loop untuk menginput nama buah
    for (int i = 0; i < n; i++)
    {
        //menginput nama buah dengan cin.getline yang memungkinkan input spasi dengan batas sebanyak 100 karakter
        cout << "Nama buah ke-" << i+1 << ": "; 
        cin.getline(buahan[i].nama, 100);
        //menghitung jumlah huruf (karakter) dari nama buah yang diinput
        //for loop dimulai dari 0 sampai karakter null
        for (int j = 0; buahan[i].nama[j]; j++)
        {
            //menjumlahkan dengan 1 tiap karakter yang diinput
            buahan[i].jumlah += 1;
        }
    }
    //memanggil void selectionsort dengan parameter array buahan dan ukuran dari array
    selectionsort(buahan, sizearr);
    //menampilkan hasil yang telah diurut
    cout << endl << "Daftar setelah diurutkan sesuai dengan jumlah huruf: \n";
    //memanggil void displayurutbuah dengan parameter array buahan dan ukuran dari array
    displayurutbuah(buahan, sizearr);
    
    return 0;
}