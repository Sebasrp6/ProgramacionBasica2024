//Ejercicio 2 - Semana 7, Contador de Alumnos
#include <iostream>
using namespace std;
int Ingresar () {
    int i;
    cout<<"Ingresa el numero de alumnos presentes: ";
    cin>>i;
    return i;
}
void contador (int n, int f) {
    if (n==20){
        cout<<"Todos los alumnos estan presentes";
    } else if (n>20) {
        cout<<"Ingrese un dato correcto del 0 al 20";
    } else { 
        cout<<"Faltaron "<<f<<" Alumnos";
    }
}
int main () {
    int a;
    a=Ingresar();
    int f=20-a;
    contador(a,f);
    return 0;
}