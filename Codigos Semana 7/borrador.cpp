#include <iostream>

void funcionConIf(int pasoActual, int pasosTotales) {
    if (pasoActual == 1) {
        // Código para el primer paso
        std::cout << "Realizando acciones para el primer paso." << std::endl;
    } else if (pasoActual == pasosTotales) {
        // Código para el último paso
        std::cout << "Realizando acciones para el último paso." << std::endl;
    } else {
        // Código para otros pasos
        std::cout << "Realizando acciones para el paso " << pasoActual << std::endl;
    }
}

// Ejemplo de uso
int main() {
    int pasoActual = 3;
    int totalPasos = 5;
    funcionConIf(pasoActual, totalPasos);
    return 0;
}
