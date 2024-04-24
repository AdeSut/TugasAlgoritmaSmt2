#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, hasil_c, hasil_i, grade;
    int nilai, limit = 100;

    cout << "Kriteria Penilaian Untuk Menjadi Calon Programmer :\n\n";
    cout << "Tes Coding akan dinyatakan LOLOS jika nilai melebihi 80 dan DIPERTIMBANGKAN jika nilai 60 - 80\n";
    cout << "Tes Interview akan dinyatakan LOLOS jika mendapat nilai A dan B\n\n";
    cout << "Penerimaan Calon Programmer\n";

    cout << "Nama : ";
    getline(cin, nama);

    cout << "Nilai tes coding : ";
    cin >> nilai;
        while (nilai > limit) {
        cout << "Nilai melebihi 100 \nSilahkan input ulang : ";
        cin >> nilai;
    }

    cout << "Nilai interview  : ";
    cin >> grade;
    cout << endl;

    cout << "\nHasil Penerimaan\n";
    cout << "Nama              : " << nama << endl;
    cout << "Nilai tes coding  : " << nilai;
    if (nilai >= 80 && nilai <= 100)
        hasil_c = " LOLOS";
    else if (nilai >= 60 && nilai < 80)
        hasil_c = " DIPERTIMBANGKAN";
    else
        hasil_c = " GAGAL";
    cout << " -" << hasil_c << endl;

    cout << "Nilai interview  : " << grade;
    if (grade == "A" || grade == "B")
        hasil_i = " LOLOS";
    else
        hasil_i = " GAGAL";
    cout << " -" << hasil_i << endl;

    if ((hasil_c == " LOLOS" || hasil_c == " DIPERTIMBANGKAN") && hasil_i == " LOLOS") {
        cout << "Selamat, kamu berhasil menjadi calon programmer!" << endl;
    }
    else {
        cout << "Maaf, kamu belum berhasil menjadi calon programmer." << endl;
    }

    return 0;
}
