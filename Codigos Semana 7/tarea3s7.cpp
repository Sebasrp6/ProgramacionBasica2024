//Ejercicio 3 - Semana 7, Listado de numeros
#include <iostream>
using namespace std;
int Ingresar () {
    int i;
    cout<<"De cuantos numeros quieres hacer un secuencia?=> ";
    cin>>i;
    return i;
}
void contador (int f) {
    for (int n=1;n<=f;n++) {
        cout<<n<<endl;
    }
    
}
int main () {
    int f;
    f=Ingresar();
    contador(f);
    return 0;
}