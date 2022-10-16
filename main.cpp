#include <iostream>

using namespace std;

int main()
{
    int n, f1 = 0, f2 = 1, berikutnya = 0;
    cout << "masukkan batas deret bilangan fibonacci : " << endl;
    cin >> n;
    cout << "deret fibonacci : " << endl;
    for (int i = 1;i <=n; i++) {
        if (i == 1) {
            cout << "" << f1 << "";
            continue;
        }
        if (i == 2) {
            cout << f2 << "";
            continue;
        }
        berikutnya = f1 + f2;
        f1 = f2;
        f2 = berikutnya;
        cout << berikutnya << "";
    }

    return 0;
}
