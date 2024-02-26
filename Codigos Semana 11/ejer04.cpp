#include <iostream>
#include <string>
using namespace std;
class Class {
private:
    int v1;
    int v2;
public:
    Class(int a, int b) : v1(a) , v2(b) {}
    void set_value1(int a);
    int get_value1();
    void set_value2(int b);
    int get_value2();
    void mostrar(int a, int b);
};
void Class::set_value1(int a){
    this->v1=a;
}
int Class::get_value1(){
    return this->v1;
}
void Class::set_value2(int b){
    this->v2=b;
}
int Class::get_value2(){
    return this->v2;
}
void Class::mostrar(int a, int b){
    this ->v1=a;
    this ->v2=b;
    cout<<v1+v2;
}
int main () {
    Class sm(9,2);
    sm.get_value1();
    sm.get_value2();
    sm.set_value1(8);
    sm.set_value2(7);
    sm.mostrar(sm.get_value1,sm.get_value2});
    return 0;
}