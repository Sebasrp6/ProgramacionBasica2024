// Ejercicio 4 - Semana 2, Trapecio
#include <stdio.h>
#include <cmath>

int main () {
    int Basemayor, Basemenor, Altura, area;
    printf("Ingrese la base mayor: ");
    scanf("%d", &Basemayor);
    printf("Ingrese la base menor: ");
    scanf("%d", &Basemenor);
    printf("Ingrese la altura: ");
    scanf("%d", &Altura);
    area=(((Basemayor+Basemenor)*Altura)/2);
    printf("El area del trapecio es: %d\n", area);
    return 0;
    
}