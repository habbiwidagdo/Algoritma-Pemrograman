/*Nama: Habbi Widagdo || NIM: 123140204 || Kelas: RC*/
#include<iostream>
using namespace std;

//prosedur untuk menghitung konversi suhu
void konversuhu(){
    cout << "Pilih suhu awal sesuai angka: \n";
    double cel, far, rea, kel;
    cout << "1. Celcius \n";
    cout << "2. Farenheit \n";
    cout << "3. Reamur \n";
    cout << "4. Kelvin \n";
    int i;
    //meminta user untuk input pilihan konversi suhu
    cout << "Pilihlah suhu awal: ";
    cin >> i;
    //percabangan untuk menghitung dan menampilkan hasil konversi
    switch (i)
    {
    //inputan 1 untuk menghitung konversi Celcius ke suhu lainnya
    case 1:
        cout << "Celcius: ";
        cin >> cel;
        cout << endl;
        cout << cel << " derajat Celcius sama dengan:\n";
        far =  cel * 9/5 + 32 ;
        cout << far << " derajat Farenheit \n";
        rea = cel * 4/5;
        cout << rea << " derajat Reamur \n";
        kel = cel + 273.15;
        cout << kel << " derajat Kelvin \n";
        break;
    //inputan 2 untuk menghitung konversi Farenheit ke suhu lainnya
    case 2:
        cout << "Farenheit: ";
        cin >> far;
        cout << endl;
        cout << far << " derajat Farenheit sama dengan:\n";
        cel = (far - 32) * 5/9 ;
        cout << cel << " derajat Celcius \n";
        rea = (far - 32) * 4/9;
        cout << rea << " derajat Reamur \n";
        kel = (far - 32) * 5/9 + 273.15;
        cout << kel << " derajat Kelvin \n";
        break;
    //inputan 3 untuk menghitung konversi Reamur ke suhu lainnya
    case 3:
        cout << "Reamur: ";
        cin >> rea;
        cout << endl;
        cout << rea << " derajat Reamur sama dengan:\n";
        cel =  rea * 5/4 ;
        cout << cel << " derajat Celcius \n";
        far = rea * 9/4 + 32;
        cout << rea << " derajat Farenheit \n";
        kel = rea * 5/4 + 273.15;
        cout << kel << " derajat Kelvin \n";
        break;
    //inputan 4 untuk menghitung konversi Kelvin ke suhu lainnya
    case 4:
        cout << "Kelvin: ";
        cin >> kel;
        cout << endl;
        cout << kel << " derajat Reamur sama dengan:\n";
        cel =  kel - 273.15;
        cout << cel << " derajat Celcius \n";
        far = (kel - 273.15) * 9/5 + 32;
        cout << far << " derajat Farenheit \n";
        rea = (kel - 273.15) * 4/5 ;
        cout << rea << " derajat Kelvin \n";
        break;
    default:
        break;
    }
}
//fungsi utama
int main(){
    //untuk memanggil prosedur konversi suhu
    konversuhu();
}