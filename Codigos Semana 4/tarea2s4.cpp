#include <iostream>
#include <string>
using namespace std;
int main () {
    string Palabra;
    int x, N;
    x=0;
    cout<<"Ingresa una palabra: ";
    cin>>Palabra;
    N = (Palabra.length()-1);

    while (x < N-x)
    {
        if (Palabra[x] != Palabra[N-x]){
            cout<<"La palabra No es un palindromo ";
            return 0;
        } 
        x++;
    }


    cout<<"La palabra si es un palindromo ";
    return 0;
}



