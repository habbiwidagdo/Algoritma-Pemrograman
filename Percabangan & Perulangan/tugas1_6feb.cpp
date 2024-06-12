/*Kasus 1: Gaji Karyawan
Sebuah perusahaan memberikan penghargaan kepada karyawannya berdasarkan lamanya masa kerja. 
Gaji awal seorang karyawan adalah Rp 5.000.000 per bulan. Setiap tahunnya, gaji karyawan tersebut akan naik sebesar 5% dari gaji sebelumnya. 
Namun, jika karyawan tersebut telah bekerja selama lebih dari 5 tahun, maka tambahan gaji tahunan akan diubah menjadi 10%.
Buatlah program menggunakan konsep perulangan dan percabangan untuk menghitung gaji karyawan setiap tahunnya selama 10 tahun!*/

#include<iostream>
using namespace std;

int main(){
    //Pada permasalahan ini digunakan 3 variabel
    int persen = 0;
    int gaji0 = 5000000;
    int gaji1 = 0;

    cout << "*Tugas 1 Algoritma Pemrograman RC Pertemuan 2*" << endl << endl;
    cout << "-----------------------" << endl;
    cout << "Nama    : Habbi Widagdo" << endl;
    cout << "NIM     : 123140204" << endl;
    cout << "Kelas   : RC" << endl;
    cout << "-----------------------" << endl << endl;

    //Konsep perulangan berikut digunakan untuk melakukan operasi perhitungan gaji selama 10 tahun
    for (int i = 1; i <= 10; i++)
    {
        //Konsep percabangan digunakan untuk melakukan operasi pada baris program khusus yang diinginkan
        if (i == 1){
            //Konsep perulangan yang di dalam percabangan digunakan untuk melakukan perhitungan berulang selama 12 bulan
            for (int j = 1; j <= 12; j++)
            {
                //Operasi dibawah untuk menghitung jumlah gaji selama 12 bulan atau satu tahun
                gaji1 += gaji0;
                //Percabangan dibawah untuk melakukan tugas khusus ketika perulangan sampai pada operasi ke yang 12
                if (j == 12)
                {
                    //Operasi pada variabel persen untuk menghitung besaran peningkatan gaji selama 1 tahun dengan mengalikan gaji awal dengan 5%
                    persen = (gaji0 * 5)/100;
                    //Operasi berikut untuk menjumlahkan gaji awal dengan peningkatan gaji
                    gaji0 = gaji0 + persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }
        //Konsep percabangan digunakan untuk melakukan operasi pada baris program khusus yang diinginkan
        else if (i == 2){
            //Konsep perulangan yang di dalam percabangan digunakan untuk melakukan perhitungan berulang selama 12 bulan
            for (int j = 1; j <= 12; j++)
            {
                //Operasi dibawah untuk menghitung jumlah gaji selama 12 bulan atau satu tahun
                gaji1 += gaji0;
                //Percabangan dibawah untuk melakukan tugas khusus ketika perulangan sampai pada operasi ke yang 12
                if (j == 12)
                {
                    //Operasi pada variabel persen untuk menghitung besaran peningkatan gaji selama 1 tahun dengan mengalikan gaji awal dengan 5%
                    persen = (gaji0 * 5)/100;
                    //Operasi berikut untuk menjumlahkan gaji awal dengan peningkatan gaji
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        //Konsep percabangan digunakan untuk melakukan operasi pada baris program khusus yang diinginkan
        }else if (i == 3){
            //Konsep perulangan yang di dalam percabangan digunakan untuk melakukan perhitungan berulang selama 12 bulan
            for (int j = 1; j <= 12; j++)
            {
                //Operasi dibawah untuk menghitung jumlah gaji selama 12 bulan atau satu tahun
                gaji1 += gaji0;
                //Percabangan dibawah untuk melakukan tugas khusus ketika perulangan sampai pada operasi ke yang 12
                if (j == 12)
                {
                    //Operasi pada variabel persen untuk menghitung besaran peningkatan gaji selama 1 tahun dengan mengalikan gaji awal dengan 5%
                    persen = (gaji0 * 5)/100;
                    //Operasi berikut untuk menjumlahkan gaji awal dengan peningkatan gaji
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }else if (i == 4){
            for (int j = 1; j <= 12; j++)
            {
                gaji1 += gaji0;
                if (j == 12)
                {
                    persen = (gaji0 * 5)/100;
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }else if (i == 5){
            for (int j = 1; j <= 12; j++)
            {
                gaji1 += gaji0;
                if (j == 12)
                {
                    persen = (gaji0 * 5)/100;
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        //Konsep percabangan digunakan untuk melakukan operasi pada baris program khusus yang diinginkan
        }else if (i == 6){
            //Konsep perulangan yang di dalam percabangan digunakan untuk melakukan perhitungan berulang selama 12 bulan
            for (int j = 1; j <= 12; j++)
            {
                //Operasi dibawah untuk menghitung jumlah gaji selama 12 bulan atau satu tahun
                gaji1 += gaji0;
                //Percabangan dibawah untuk melakukan tugas khusus ketika perulangan sampai pada operasi ke yang 12
                if (j == 12)
                {
                    //Operasi pada variabel persen untuk menghitung besaran peningkatan gaji selama 1 tahun dengan mengalikan gaji awal dengan 10%
                    persen = (gaji0 * 10)/100;
                    //Operasi berikut untuk menjumlahkan gaji awal dengan peningkatan gaji
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }
        //Konsep percabangan digunakan untuk melakukan operasi pada baris program khusus yang diinginkan
        else if (i == 7){
            //Konsep perulangan yang di dalam percabangan digunakan untuk melakukan perhitungan berulang selama 12 bulan
            for (int j = 1; j <= 12; j++)
            {
                //Operasi dibawah untuk menghitung jumlah gaji selama 12 bulan atau satu tahun
                gaji1 += gaji0;
                //Percabangan dibawah untuk melakukan tugas khusus ketika perulangan sampai pada operasi ke yang 12
                if (j == 12)
                {
                    //Operasi pada variabel persen untuk menghitung besaran peningkatan gaji selama 1 tahun dengan mengalikan gaji awal dengan 10%
                    persen = (gaji0 * 10)/100;
                    //Operasi berikut untuk menjumlahkan gaji awal dengan peningkatan gaji
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }else if (i == 8){
            for (int j = 1; j <= 12; j++)
            {
                gaji1 += gaji0;
                if (j == 12)
                {
                    persen = (gaji0 * 10)/100;
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }else if (i == 9){
            for (int j = 1; j <= 12; j++)
            {
                gaji1 += gaji0;
                if (j == 12)
                {
                    persen = (gaji0 * 10)/100;
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }else if (i == 10){
            for (int j = 1; j <= 12; j++)
            {
                gaji1 += gaji0;
                if (j == 12)
                {
                    persen = (gaji0 * 10)/100;
                    gaji0 += persen;
                    cout << "Gaji tahun ke-" << i << " : " << gaji1 << endl;
                    cout << "Mendapatkan kenaikan gaji menjadi : " << gaji0 << endl;
                }
            }
        }
    }
    return 0;
}