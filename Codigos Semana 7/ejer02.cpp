#include <iostream>
using namespace std;

void Mostrar(int a, int b, int c, int d, int e, int s){
    cout<<"La suma "<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" + "<<e<<" es igual a "<<s;
}
int Sumar(int a, int b, int c, int d, int e){
    int s=a+b+c+d+e;
    return s;
}
int llenar(){
    int r;
    cout<<"Ingrese un numero: ";
    cin>>r;
    return r;
}
int main(){
    int a,b,c,d,e,s;
    a=llenar();
    b=llenar();
    c=llenar();
    d=llenar();
    e=llenar();
    s=Sumar(a,b,c,d,e);
    Mostrar(a,b,c,d,e,s);
    return 0;
}