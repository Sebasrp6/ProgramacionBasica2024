// Ejercicio 7 - Semana 2, Triangulo Circunscrito
#include <stdio.h>
#include <cmath>

int main () {
    int LadoA, LadoB, LadoC, Radio, sperimetro, area;
    printf("Ingrese el primer lado: ");
    scanf("%d", &LadoA);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &LadoB);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &LadoC);
    printf("Ingrese el radio: ");
    scanf("%d", &Radio);
    sperimetro=((LadoA+LadoB+LadoC)/2);
    area=(sperimetro*Radio);
    printf("El semiperimetro del triangulo circunscrito es: %d\n", sperimetro);
    printf("El area del triangulo circunscrito es: %d\n", area);
    return 0;
    
}