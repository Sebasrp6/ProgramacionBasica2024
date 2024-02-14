//Ejercicio 7 - Semana 4, Eliminacion de numeros repetidos
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 0;
    int cont = 0;
    
    cout << "Ingrese la cantidad de datos que ingresará: " << endl;
    cin >> n;

    vector<int> res(n);

    for (int i = 0; i < n; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> res[i];
    }

    for (int i = 0; i < res.size(); i++) {
        for (int j = i + 1; j < res.size(); j++) {
            if (res[i] != 0 && res[i] == res[j]) {
                res[j] = 0;
                cont++;
            }
        }
    }

    cout << "Se encontraron " << cont << " numeros repetidos que fueron retirados.\n";

    return 0;
}
