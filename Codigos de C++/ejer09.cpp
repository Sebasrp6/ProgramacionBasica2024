#include<iostream>
using namespace std;
int main() 
{
    float tcelsius, tfahrenheit;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> tcelsius;
    tfahrenheit=(((9*tcelsius)/5)+32);
    cout << tcelsius << " grados Fahrenheit son equivalentes a " << tfahrenheit << " grados Farenheit.";
    return 0;
}