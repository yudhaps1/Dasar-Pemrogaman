#include <iostream>

using namespace std;

int main()
{
     int uang = 5000 ;
    int harga;

    cout<< " ======================  " << endl;
    cout<< " Uang Dito : " <<uang<<endl;
    cout<< " harga permen : 300 " << endl;
    cout<< " harga permen : 500  " << endl;
    cout<< " harga permen : 1000  " << endl;
    cout<< " ======================  " << endl;
    cout<< " Harga Satuan Permen : " ;
    cin>>harga;


        if (harga == 500 || harga == 1000 ){
            cout<< " Maka permen yang didapatkan Dito: " <<uang / 1000 << " buah. " <<endl;
        } else  if (harga == 300 ){
            cout<< " Kelipatan harga Permen : " ;
                for  ( int i = harga ; i <= uang ; i+= 300 ){
                    cout<<i<< "  " ;
            }
             cout<<endl;
             cout<< " Maka permen yang didapatkan Dito: " << uang / harga<< " Buah " <<endl;
        } else {
            cout<< " maaf yang anda inputkan salah " <<endl;
        }
    return 0;
}
