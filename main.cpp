#include <iostream>

using namespace std;

int main()
{
    int i,j,a = 0, angka,mins, maks;
    float ra;

    //soal 1
    cout << "soal no. 1" << endl;
    cout << "===========" << endl;
    for (i = 100, j = 1; i >= 1 && j <= 100; i--, j++) {
       cout << "i = " <<i << " dan  j = "<< j << endl;
    }

    //soal 2
    cout << "soal no. 2" << endl;
    cout << "===========" << endl;

    for (j = 1; j <= 100; j++) {
        if(j%2 == 1) {
            continue;
        }
        cout << "Nilai genap adalah :" << j << endl;
    }

    //soal 3
    cout << " soal no. 3 " << endl;
    cout << "=============" << endl;
    for (i = 100; i>= 1; i--) {
        cout << i << endl;
        if ( i == 55) {
            break;
        }
    }

    //soal 4
    cout << "soal no. 4" << endl;
    cout << "===========" << endl;
    for (j = 1;j <= 20; j++) {
        cout << j << endl;
        a +=;
        ra = a/j;
    }
    cout << "\njumlah =" << a << endl;
    cout << "Rata-Rata " << ra << ".00" << endl;

    //soal 5
    cout << "soal no 5" << endl;
    cout << "==========" << endl;
    cout << " Program ini berhenti jika anda menginput angka = -99\n" << endl;
    for (j = 1; j<= 100; j++) {
        cout << "masukkan Angka : ";
        cin >> angka;
        if (angka == -99) {
            cout << "\nKeluar karena break" <, endl;
            break;
        }
    }

    //soal 6
    cout << "soal no. 6" << endl;
    cout << "===========" << endl;
    for (j = 1; j <= 100; j++) {
        cout << "Masukkan Angka :";
        cin >> angka;
        if (angka == -99) {
            break;
        }

        if (j == 1) {
            mins = angka;
            maks = angka;
        } else {
        if (angka > maks) {
            maks = angka;
        } if ( angka < mins) {
        mins = angka;
        }
        }
    }
    cout << endl;
    cout << " max = " << maks << endl;
    cout << " min = " << mins << endl;

    //soal no 7
cout << "Soal no. 7" << endl;
cout << "===========" << endl;
for(j = 1; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> z;
    if(z == 9999) {
        break;
    }
    cout << z << endl;
    p = p + z;
}
cout << "Jumlah angka = " << p << endl;



//soal no 8
cout << "Soal no. 8" << endl;
cout << "===========" << endl;
for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angka;
    if(angka == 9999) {
        break;
    }
    cout << angka << endl;
    a += j;
}
cout << "Jumlah angka = " << j << endl;


// soal 9
cout << "Soal no. 9" << endl;
cout << "===========" << endl;
for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> m;
    cout << m << endl;
    if(m == 9999) {
        break;
    } else if(m != 9999) {
        n += m;
    }
    b += 1;
}
cout << "Jumlah angka = " << n << endl;
cout << "Jumlah cacah angka = " << b << endl;

// soal 10
cout << "Soal no. 10" << endl;
cout << "=============" << endl;
for(i = 1; i <= 7; i++) {

    cout << "Looping yang ke - " << i << endl;
    for(j = 1; j <= 10; j++) {
        cout << "-angka " << j << "-" << endl;
    }
}

//soal no 11
cout << "Soal no. 11" << endl;
cout << "============" << endl;
cout << "Masukan angka = ";
cin >> angka;
for(i = 1; i <= 10; i++) {
    sum = i*angka;
   cout << i << " x " << angka << " = " << sum << endl;
}

//soal 12
cout << "Soal no. 12" << endl;
cout << "============" << endl;
cout << "-------------------------" << endl;
cout << "Celcius     Fahremheit" << endl;
cout << "-------------------------" << endl;
for(c = 0; c <= 100; c++) {
  f = ((9.0/5)*c)+32;
  printf("%d \t|\t %.1f |\n",c, f);
}


// soal 13
cout << "Soal no. 13" << endl;
cout << "============" << endl;
cout << "------------------------------------------------------------------------------" << endl;
cout << "Celcius \t Fahremheit \t Keterangan" << endl;
cout << "------------------------------------------------------------------------------" << endl;
for(c = 100; c >= -45; c--) {
  f = ((9.0/5)*c)+32;
  if(c == 100) {
  printf("%d \t\t %.1f \t\t Air Mendidih \n",c, f);
  } else if(c == 40) {
  printf("%d \t\t %.1f \t\t Air Mandi Panas \n",c, f);
  } else if(c == 37) {
  printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",c, f);
  } else if(c == 30) {
  printf("%d \t\t %.1f \t\t Cuaca Pantai\n",c, f);
  } else if(c == 21) {
  printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",c, f);
} else if(c == 10) {
  printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",c, f);
} else if(c == 0) {
  printf("%d \t\t %.1f \t\t Titik Beku Air \n",c, f);
} else if(c == -18) {
  printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",c, f);
} else if(c == -40) {
  printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",c, f);
  cout << "------------------------------------------------------------------------------" << endl;
}
}

    return 0;
}
