#include <iostream>
#include <string>
using namespace std;
class Persona {
protected:
    string name;

public:
    Persona(const string& n) : name(n) {}

    virtual void Consultar() {}
};

class Administrativo : public Persona {
private:
    string Area;

public:
    Administrativo(const string& n, const string& a) : Persona(n), Area(a) {}

    void Consultar() override {
        cout<<"Nombre del personal administrativo: "<<name<<endl;
        cout<<"Area "<<Area<<endl;
        cout<<endl;
    }
};

class Docente : public Persona {
private:
    string cargo;
    int horastrabajadas;
public:
    Docente(const string& n,  const string& c, int h) : Persona(n), cargo(c), horastrabajadas(h) {}

    void Consultar() override {
        cout<<"Nombre del docente: "<<name<<endl;
        cout<<"Cargo: "<<cargo<<endl;
        cout<<"Horas trabajadas: "<<horastrabajadas<<endl;
        cout<<endl;
    }
};


int main() {
    Administrativo ad1("Patricio", "Departamento academico de ciencias exactas");
    Docente do1("Horacio", "Docente de Matematicas", 8);
    

    ad1.Consultar();
    do1.Consultar();

    return 0;
}