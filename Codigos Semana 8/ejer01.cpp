#include <iostream>
using namespace std;
void porvalor (int a, int b){
    a*=2;
    b*=2;
}
void porreferencia (int &a, int &b){
    a*=2;
    b*=2;
}
void mostrar (int a, int b) {
    cout<<"El valor de A es: "<<a<<endl;
    cout<<"El valor de B es: "<<b<<endl;
}
int main () {
    int a=5;
    int b=10;
    porvalor(a,b);
    mostrar(a,b);
    porreferencia(a,b);
    mostrar(a,b);
    return 0;
}