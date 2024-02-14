//Ejercicio 3 - Semana 2, Rombo
#include <stdio.h>
#include <cmath>

int main () {
    int DiagonalMayor, DiagonalMenor, area, perimetro, suma1, suma2, sumatotal;
    printf("Ingrese el diagonal Mayor ");
    scanf("%d", &DiagonalMayor);
    printf("Ingrese el diagonal Menor ");
    scanf("%d", &DiagonalMenor);
    area=((DiagonalMayor*DiagonalMenor)/2);
    suma1=(DiagonalMayor/2);
    double suma1p = pow(suma1, 2.0);
    suma2=(DiagonalMenor/2);
    double suma2p = pow(suma2, 2.0);
    sumatotal=(suma1p+suma2p);
    double raizCuadrada = sqrt(sumatotal);
    perimetro=(raizCuadrada*4);
    printf("El area del rombo es: %d\n", area);
    printf("El lado del rombo es: %f\n", raizCuadrada);
    printf("La perimetro del rombo es: %d\n", perimetro);
    return 0;
    
}