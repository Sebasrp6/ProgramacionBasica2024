//Ejercicio 7 - Semana 5
#include <iostream>
using namespace std;
int main()
{
    float val = 1000.0;
    do
    {
        val = val / 5;
        cout << "*";
    } while (val > 1.0);
    return 0;
}