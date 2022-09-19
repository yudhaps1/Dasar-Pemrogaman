#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    float pi = 3.14;
    float a;
    float b;
    float c;

    cout << "==============================";
    cout << "\nmasukkan jari-jari lingkaran : " << endl;
     cin >> a;
    cout << "\nmasukkan jari-jari lingkaran : " << endl;
    cin >> b;
    c=pi*a*b;
    cout << "hasil luas lingkaran adalah : " <<c;

    cout << "\n==============================";

    float q;
    float r;
    float t;

    cout << "\nmasukkan panjang persegi panjang : " << endl;
     cin >> q;
    cout << "\nmasukkan lebar persegi panjang : " << endl;
     cin >> t;

    r=q*t;
    cout << "luas persegi panjang adalah : " <<r;
    cout << "\n==============================";
    cout << "\nSELESAI..";
    return 0;
}
