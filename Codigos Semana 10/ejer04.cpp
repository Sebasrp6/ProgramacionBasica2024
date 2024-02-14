#include <iostream>
#include <string>
using namespace std;

class Manzana {
private:
    string type;
    float price;

public:
    Manzana(string n, float y) {
        this->type = n;
        this->price = y;
    }

    void mostrar1() {
        cout << this->type << endl;
    }
    void mostrar2() {
        cout << this->price << endl;
    }
    void newprice(float price1) {
        this->price = price1;
    }
};
int main() {
    Manzana manzana("Chilena", 5.6);
    cout << "El nombre de la manzana es: ";
    manzana.mostrar1();
    manzana.newprice(5.0);
    cout << "El nuevo precio es : ";
    manzana.mostrar2();

    return 0;
}
