// Ejercicio 5 - Semana 4, Cifrado de Cesar
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
string abecedario, contra, Nue;
int n, i;
abecedario = "abcdefghijklmnñopqrstuvwxyz";
vector <char> abcd (27);

for (i = 0; i < 27; i++){
    abcd[i] = abecedario[i];
}

cout<<"Ingrese el desplazamiento del cifrado: "<<endl;
cin>>n;
cout<<"Ingrese su contrasena: "<<endl;
cin>>contra;
int longitud = contra.length();


for (i = 0; i < longitud;i++){
    for ( int j = 0; j < 27; j++){
        if (abcd[j] == contra[i]) {
            contra[i] = abcd[j+n];
            Nue = Nue + contra[i];
            break;
        }
    } 
}

cout<<"Su nueva contrasena: "<<Nue<<endl;

return 0;
}