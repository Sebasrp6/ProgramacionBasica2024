#include <iostream>
#include <string>
using namespace std;
class persona {
    public: 
    string name;
    int year;
    //constructor
    persona(string n, int y){
        this->name=n;
        this->year=y;
    }
    void mostrar () {
        cout<<"Nombre: "<<this->name<<"Edad: "<<this->year;
    }
};
int main () {
    persona p1("Juan", 18);
    p1.mostrar();
    persona p2("Luis");
    persona p3();
}