#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int a, b;
    string jurusan [3] = {"Teknik Informatika","Sistem Informasi","Desain Komunikasi Visual"};
    string Mahasiswa [4] = {"Freshman","Shopomore","Junior","Senior"};

    cout << "===Daftar Jurusan===" << endl;
    cout << "1. " << jurusan[0] << endl;
    cout << "2. " << jurusan[1] << endl;
    cout << "3. " << jurusan[2] << endl << endl;

    cout << "===Kategori Mahasiswa===" << endl;
    cout << "1. Semester 1-2 = " << Mahasiswa[0] << endl;
    cout << "2. Semester 3-4 = " << Mahasiswa[1] << endl;
    cout << "3. Semester 5-6 = " << Mahasiswa[2] << endl;
    cout << "4. Semester 7-8 = " << Mahasiswa[3] << endl << endl;

    cout << " Masukkan Jurusan Anda : "; cin >> a;
    cout << " Masukkan Semester Anda : "; cin >> b;
    if (b>=1 && b<=2) {
        cout << "Jurusan Anda adalah" << jurusan[a-1] << "." << endl;
        cout << "Anda Dalam Kategori" << Mahasiswa[0] << "." << " year." << endl;

    }
    else if (b>=3 && b<=4) {
        cout << "Jurusan Anda adalah" << jurusan[a-1] << "." << endl;
        cout << "Anda Dalam Kategori" << Mahasiswa[1] << "." << " year." << endl;
    }
     else if (b>=5 && b<=6) {
        cout << "Jurusan Anda adalah" << jurusan[a-1] << "." << endl;
        cout << "Anda Dalam Kategori" << Mahasiswa[2] << "." << " year." << endl;
     }
     else if (b>=7 && b<=8) {
        cout << "Jurusan Anda adalah" << jurusan[a-1] << "." << endl;
        cout << "Anda Dalam Kategori" << Mahasiswa[3] << "." << " year." << endl;
     }
        else{
            cout << "Pilihan Anda Salah!!!" << endl;
        }

    return 0;
}
