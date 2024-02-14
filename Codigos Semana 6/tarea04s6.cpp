//Ejercicio 4 - Semana 6, Sumar matrices
#include <iostream>
using namespace std;

int main() {
    int f = 3;
    int c = 3;

    int matriz1[3][3] = {
        {2, 3, 4},
        {5, 4, 6},
        {4, 3, 5}
    };

    int matriz2[3][3] = {
        {8, 9, 1},
        {8, 6, 4},
        {9, 2, 4}
    };

    int matrizSuma[3][3];

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "Matriz sumada:\n";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matrizSuma[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
