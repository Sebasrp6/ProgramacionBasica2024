// Ejercicio 6 - Semana 2, Triangulo Inscrito
#include <stdio.h>
#include <cmath>

int main () {
    int LadoA, LadoB, LadoC, Radio, area;
    printf("Ingrese el primer lado: ");
    scanf("%d", &LadoA);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &LadoB);
    printf("Ingrese el tercer lado: ");
    scanf("%d", &LadoC);
    printf("Ingrese el radio: ");
    scanf("%d", &Radio);
    area=((LadoA*LadoB*LadoC)/(4*Radio));
    printf("El area del triangulo inscrito es: %d\n", area);
    return 0;
    
}