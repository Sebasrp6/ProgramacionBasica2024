#include <iostream>
using namespace std;
int main()
{
    int d1;
    cout<<"enter the number of numbers: ";
    cin>>d1;
    int contador = 0;
    double suma = 0;
    double numero;
    while (true)
    {   
        cout << "enter the number " << contador + 1 << ":\n ";
        ++contador;
        cin >> numero;
        suma += numero;
         if(contador==d1)
        break;
    }
    cout << "The sum of the "<<d1<< " numbers is: " << suma << endl;

    return 0;
}
      
