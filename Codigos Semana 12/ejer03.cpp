#include <iostream>
using namespace std;
class pet {
    private:
    string name;
    public:
    pet (string _a) : name (_a){}
    void run () {
        cout<<"Estoy corriendoooooo\n";
    }
};
class dog : public pet {
    public:
    dog (string a) : pet (a) {}
    void sonido (){ 
    cout<<"Miau Miau"<<endl;
    }
};
class cat : public pet {
    public:
    cat (string a) : pet (a) {}
    void sonido (){ 
    cout<<"Wau Wau"<<endl;
    }
};

int main () {
    pet *a = new dog("dog1");
    a->run();
    static_cast <dog*>(a)->sonido();
    pet *b = new cat("cat1");
    b->run();
    static_cast <cat*>(b)->sonido();
    return 0;
}