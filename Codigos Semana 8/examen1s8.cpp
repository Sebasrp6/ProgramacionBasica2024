/*- Se tiene un vector que almacena letras, se pide mostrar el número de vocales y consonantes, utilizar
o While à si es par N
o for à si es impar*/
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    vector<char> letras = {'s', 'k', 'm', 'o', 't', 'e', 'e', 'o', 'i', 'u'};
    vector<char> vocales = {'a', 'e', 'i', 'o', 'u'};
    
    int cantddevocales=0, cantdeconsonantes=0;

    for (int i = 0; i < letras.size(); ++i) {
        if (isalpha(letras[i])) {
            char letra = tolower(letras[i]);
            bool Vocal = false;
            for (int j = 0; j < vocales.size(); ++j) {
                if (letra == vocales[j]) {
                    Vocal=true;
                    break;
                }
            }
            if (Vocal) {
                cantddevocales++;
            } else {
                cantdeconsonantes++;
            }
        }
    }
    cout<<"Numero de vocales: "<<cantddevocales<<endl;
    cout<<"Numero de consonantes: "<<cantdeconsonantes<<endl;

    return 0;
}

