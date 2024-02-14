// Ejercicio 5 - Semana 2, Triangulo
#include <stdio.h>
#include <cmath>

int main () {
    int Lado1, Lado2, Base, Altura, area, Perimetro;
    printf("Ingrese el primer lado: ");
    scanf("%d", &Lado1);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &Lado2);
    printf("Ingrese la base: ");
    scanf("%d", &Base);
    printf("Ingrese la Altura: ");
    scanf("%d", &Altura);
    area=((Base*Altura)/2);
    Perimetro=(Lado1+Lado2+Base);
    printf("El area del triangulo es: %d\n", area);
    printf("El Perimetro del triangulo es: %d\n", Perimetro);
    return 0;
    
}