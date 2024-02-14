// Ejercicio 8 - Semana 2, Triangulo mediante la formula de heron
#include <stdio.h>
#include <cmath>

int main () {
    double LadoA, LadoB, LadoC;
    double sperimetro, area;
    printf("Ingrese el primer lado: ");
    scanf("%lf", &LadoA);
    printf("Ingrese el segundo lado: ");
    scanf("%lf", &LadoB);
    printf("Ingrese el tercer lado: ");
    scanf("%lf", &LadoC);
    sperimetro=((LadoA+LadoB+LadoC)/2);
    area=sqrt(sperimetro*(sperimetro-LadoA)*(sperimetro-LadoB)*(sperimetro-LadoC));
    
    printf("El semiperimetro del triangulo es: %f\n", sperimetro);
    printf("El area del triangulo mediante la formula de Heron es: %f\n", area);
    return 0;
    
}