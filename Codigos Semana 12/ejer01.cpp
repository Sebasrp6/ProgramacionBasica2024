#include <iostream>
using namespace std;
class Super {
    private: 
    int a;
    public: 
    void set_a (int x){
        this ->a=x;
    }
    int get_x () {
        return this->a;
    }
};
class Sub:private Super {

};
class sub2:Sub {
    public: 
    void mostrar () {

    }
};
int main () {
    Sub r;
    r.set_a;
    sub2 p;
    p.mostrar;
    return 0;
}