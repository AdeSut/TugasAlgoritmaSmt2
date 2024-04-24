#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama, keterangan, tarif;
    int umur, tinggi;

    cout << "Tarif masuk wahana Disney Island" << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "Umur : ";
    cin >> umur;
    cout << "Tinggi Badan : ";
    cin >> tinggi;

    if (umur < 1)
        keterangan = "Dilarang Masuk";
    else if (umur >= 2 && umur <= 3 && tinggi >= 70) {
        tarif = "Rp 40.000";
        keterangan = "Jika tinggi anak umur 2-3 tahun melebihi 70cm, tarif bertambah Rp 10.000";
    }
    else if (umur < 3) {
        tarif = "Rp 30.000";
        keterangan = "-";
    }
    else if (umur >= 4 && umur <= 7 && tinggi >= 120) {
        tarif = "Rp 55.000";
        keterangan = "Jika tinggi anak umur 4-7 tahun melebihi 120cm, tarif bertambah Rp 15.000";
    }
    else if (umur < 7) {
        tarif = "Rp 40.000";
        keterangan = "-";
    }
    else if (umur >= 8 && umur <= 10 && tinggi >= 150) {
        tarif = "Rp 70.000";
        keterangan = "Jika tinggi anak umur 8-10 tahun melebihi 150cm, tarif bertambah Rp 20.000";
    }
    else if (umur < 10) {
        tarif = "Rp 50.000";
        keterangan = "-";
    }
    else {
        tarif = "Rp 80.000";
        keterangan = "-";
    }

    cout << "Tarif masuk wahana : " << tarif << endl;
    cout << "Keterangan         : " << keterangan << endl;

    return 0;
}