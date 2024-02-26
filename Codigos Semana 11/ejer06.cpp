#include <iostream>
using namespace std;
class punto{
    private: 
    int a,b;
    public:
    punto(int x, int y):a(x),b(y) {}
    void show () {
        cout<<"X: "<<this->a<<endl<<"Y: "<<this->b<<endl;
        
    }
    void set_a(int x){
        this->a=x;
    }
     void set_b(int y){
        this->b=y;
    }
};
void modificar(punto& p){
    p.set_a(300);
    p.set_b(500);

}
int main () {
    punto p(7,8);
    p.show();
    modificar(p);
    p.show();
    return 0;
}