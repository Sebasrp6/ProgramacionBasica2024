#include <iostream> 
using namespace std;
int distancia(int v, int t){
    int r=v*t;
    return r;
}
int llenar(){
    int r;
    cout<<"Ingrese un numero: ";
    cin>>r;
    return r;
    
}
void mostrar (int v, int t, int d){
    cout<<"La distancia es: "<<v<<" * "<<t<<" = "<<d;
}
int main () {
    int v,t,d;
    v=llenar();
    t=llenar();
    d=distancia(v,t);
    mostrar(v,t,d);
}