#include<iostream>

using namespace std;

//membuat sebuah record baru yang mendeklarasikan variabel baru untuk menampung data informasi
struct tugas
{
    string nama;
    string deskripsi;
    string deadline;
    string status;
};

//sebagai variabel yang digunakan untuk menampung jawaban konfirmasi
char confirm;
//pointer untuk menampung alamat nilai variabel terbaru dari update data
string *update;
//membuat variabel baru yang nantinya menampung data dengan menggunakan struct tugas sebelumnya
tugas tugas1;

//void yang digunakan untuk memasukkan data informasi tugas
void first(){
    cout << "Masukkan informasi tugas \n";
    //menginput data informasi tugas ke dalam record
    cout << "Nama Tugas: ";
    getline(cin, tugas1.nama);
    cout << "Deskripsi: ";
    getline(cin, tugas1.deskripsi);
    cout << "Deadline: ";
    getline(cin, tugas1.deadline);
    cout << "Status: ";
    getline(cin, tugas1.status);
    cout << endl;
}

//void untuk menampilkan informasi tugas
void seccond(){
    cout << "Informasi Tugas: \n";
    cout << "Nama Tugas: " << tugas1.nama << endl;
    cout << "Deskripsi: " << tugas1.deskripsi << endl;
    cout << "Deadline: " << tugas1.deadline << endl;
    cout << "Status: " << tugas1.status << endl;
    cout << endl;
}

int main(){
    //memanggil void first dan seccond
    first();
    seccond();

    //menginisialisasi pointer "update" ke alamat memori dari variabel "status" dalam record "tugas1"
    update = &tugas1.status;

    //do while digunakan untuk pengguna mampu memperbarui status tugas
    do
    {
        //mengkonfirmasi apakah pengguna mau melakukan update status
        cout << "Apakah Anda ingin mengubah status tugas? (y/n): ";
        cin >> confirm;
        
        //jika iya, maka pengguna akan menginput status tugas
        if (confirm == 'y')
        {
            //inputan di update ke pointer "update"
            cout << "Masukkan status baru (To Do, In Progress, Done): ";
            cin.ignore(); getline(cin, *update);
            cout << endl;
            //memanggil void seccond
            seccond();
        }
        //jika tidak, menampilkan "Terimakasih!"
        else if (confirm == 'n')
        {
            cout << "Terimakasih!";
        }
        //loop akan terus berlangsung apabila pengguna memasukkan "y" pada baris program ke-59
    } while (confirm == 'y');
    
    return 0;
}