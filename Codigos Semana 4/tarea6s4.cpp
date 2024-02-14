// Ejercicio 6 - Semana 4, P&R
#include <iostream>
#include <cctype> 
#include <string>

using namespace std;

int main() {
    int n1, n2, n4, n5;
    float n3;
    int correctas = 0, incorrectas = 0;

    cout << "Jugaras P&R, tendras 5 preguntas, si aciertas 3, ganas." << endl;

    cout << "1. ¿Cuanto da 19 % 5 en el lenguaje C++? "<<endl;
    cin >> n1;
    if (n1 == 4) {
        ++correctas;
    } else {
        ++incorrectas;
    }

    cout << "2. ¿Que ano fue el del Bicentenario? ? "<<endl;
    cin >> n2;
    if (n2 == 2021) {
        ++correctas;
    } else {
        ++incorrectas;
    }

    cout << "3. ¿Cuanto es 10/4 en punto flotante en C++? "<<endl;
    cin >> n3;
    if (n3 == 2.5) {
        ++correctas;
    } else {
        ++incorrectas;
    }

    cout << "4. ¿Cual es el año del llamado fin del mundo maya? "<<endl;
    cin >> n4;
    if (n4 == 2012) {
        ++correctas;
    } else {
        ++incorrectas;
    }

    cout << "5. ¿Cuándo se creo la FIIS? "<<endl;
    cin >> n5;
    if (n5 == 1999) {
        ++correctas;
    } else {
        ++incorrectas;
    }

    if (correctas >= 3) {
        cout << "¡Ganaste con " << correctas << " preguntas correctas!" << endl;
    } else {
        cout << "Perdiste con " << incorrectas << " preguntas incorrectas." << endl;
    }

    return 0;
}
