//Ejercicio 1 - Semana 7, Hallar el area de un triangulo con circulo circunscrito 
#include <iostream>
using namespace std;
int Ingresar (){
    int i;
    cout<<"Ingrese un lado del triangulo: ";
    cin>>i;
    return i;
}
int Ingresar2 (){
    int p;
    cout<<"Ingrese el radio del circulo circunscrito: ";
    cin>>p;
    return p;
}
int Ecuacion (int l1, int l2, int l3) {
    int r=((l1+l2+l3)/2);
    return r;
}
int Ecuacion2 (int a, int b) {
    int r=a*b;
    return r;
}
void Mostrar (int sp, int a){
    cout<<"El semiperimetro es: "<<sp<<" Y el area es: "<<a;
    
}
int main () {
    int l1,l2,l3,r,sp,a;
    l1=Ingresar();
    l2=Ingresar();
    l3=Ingresar();
    r=Ingresar2();
    sp=Ecuacion(l1,l2,l3);
    a=Ecuacion2(r,sp);
    Mostrar(sp,a);
    return 0;
}