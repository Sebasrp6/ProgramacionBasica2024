#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float n1, n2, n3, max;
    cout<<"Escribe el primer numero";
    cin>>n1;
    cout<<"Escribe el segundo numero";
    cin>>n2;
    cout<<"Escribe el tercer numero";
    cin>>n3;
    max=n1;
    if (n2>max) {
        max=n2;
    } if (n3>max) {
        max=n3;
    }
    cout<<"El numero mayor es "<<max;
    return 0;
}