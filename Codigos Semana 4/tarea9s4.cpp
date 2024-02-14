#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main () {
    int In = 0;
    int Fn = 0;
    int cont = 0;
    cout << "Ingrese el numero de inicio y fin:\n";
    cin >> In >> Fn;
    vector<int> primos;

    for (int i = In; i <= Fn; i++) {
        primos.push_back(i);
    }

    cout << "Numeros primos dentro de ese rango:\n";

    for (int i = 0; i < primos.size(); i++) {
        if (primos[i] < 2) {
            continue;
        }

        for (int j = 2; j <= sqrt(primos[i]); j++) {
            if (primos[i] % j == 0) {
                primos[i] = 0;
                cont++;
                break;
            }
        }
    }

    for (int i = 0; i < primos.size(); i++) {
        if (primos[i] != 0) {
            cout << "\t" << primos[i];
        }
    }

    cout << endl << "La cantidad de numeros primos es: " << primos.size() - cont << endl;

    return 0;
}
