//Ejercicio 4 - Semana 7, indicador de numero Par
#include <iostream>
using namespace std;
void esPar(int n1, bool &r) {
    r = (n1 % 2 == 0);
}
int Ingresar (){
    int n1;
    cout<<"Ingresa un numero: ";
    cin>>n1;
    return n1;
}

int main() {
    bool Par;
    int n1;
    n1=Ingresar();
    esPar(n1, Par);
    cout << "Es "<<n1<<" un numero par? " << (Par ? "Si" : "No") << endl;

    return 0;
}
