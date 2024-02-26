#include <iostream>
using namespace std;
class database {
    public:
    void guardar() {

    }
    void borrar () {

    }
    void mostrar () {

    }
};
int main () {
    
    return 0;
}
class oracle : public database {
    private:
    string cadena;
    int puerto;
    public:
    oracle(string c, int p) : cadena(c) , puerto(p) {}
    
    void temporales () {

    }
};
class myqsl : public database {
    private:
    string cadena;
    int puerto;
    public:
    myqsl(string c, int p) : cadena(c) , puerto(p) {}
};
class posgret : public database {
    private:
    string cadena;
    int puerto;
    public:
    posgret(string c, int p) : cadena(c) , puerto(p) {}
};
int main () {
    database *a = new oracle ("", 1921);
    database *b = new myqsl ( "localhost" , 3306);
    database *c = new posgret("127.0.0.1", 5432) ;
    return 0;

}