//Ejercicio 1 - Semana 2, Cuadrado
#include <stdio.h>
#include <cmath>

int main () {
    int Lado, area, perimetro;
    double diagonal;
    printf("Ingrese el valor del lado: ");
    scanf("%d", &Lado);
    area=(Lado*Lado);
    perimetro=(Lado*4);
    double raizCuadrada = sqrt(2);
    diagonal=(Lado*raizCuadrada);
    printf("El area del cuadrado es: %d\n", area);
    printf("El perimetro del cuadrado es: %d\n", perimetro);
    printf("La medida del diagonal del cuadrado es: %f\n", diagonal);
    return 0;
    
}