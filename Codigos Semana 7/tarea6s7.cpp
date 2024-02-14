//Ejercicio 6 - Semana 7, Suma de 2 numeros
#include <iostream>
using namespace std;
void sumar(int a, int b, int &Suma) {
    Suma = a + b;
}
int Ingresar (){
    int n1;
    cout<<"Ingresa un numero: ";
    cin>>n1;
    return n1;
}
int main() {
    int a, b, Suma;
    a=Ingresar();
    b=Ingresar();
    sumar(a, b, Suma);
    cout << "La suma de " <<a<<" + "<<b<<" es "<<Suma<< endl;

    return 0;
}
