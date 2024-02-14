// Ejercicio 2 - Semana 2, Rectangulo
#include <stdio.h>
#include <cmath>

int main () {
    int Altura, Base, area, perimetro;
    printf("Ingrese tu altura");
    scanf("%d", &Altura);
    printf("Ingrese tu base");
    scanf("%d", &Base);
    area=(Altura*Base);
    perimetro=((Altura+Base)*2);
    double pAltura = pow(Altura, 2.0);
    //pow para poder realizar la potencia
    double pBase = pow(Base, 2.0);
    double pp = (pAltura+pBase);
    double raizCuadrada = sqrt(pp);

    printf("El area del rectangulo es: %d\n", area);
    printf("El perimetro del rectangulo es: %d\n", perimetro);
    printf("La medida del diagonal del rectangulo es: %f\n", raizCuadrada);
    return 0;
    
}