//Ejercicio 5 - Semana 6, Matrices Multiplicadas
#include <iostream>
using namespace std;

int main() {
    int filas1 = 3;
    int columnas1 = 3;
    int filas2 = 3;
    int columnas2 = 3;

    int matriz1[3][3] = {
        {2, 1, 3},
        {3, 4, 2},
        {5, 2, 3}
    };

    int matriz2[3][3] = {
        {1, 2, 0},
        {4, 1, 2},
        {3, 2, 1}
    };

    int matrizM[3][3];

    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            matrizM[i][j] = 0;
        }
    }
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            for (int k = 0; k < columnas1; ++k) {
                matrizM[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "Matriz multiplicada:\n";
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << matrizM[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
