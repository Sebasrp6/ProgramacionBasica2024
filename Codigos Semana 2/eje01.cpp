#include <iostream>
enum Estado { 
    WINTER,
    SUMMER,
    AUTUMN,
    SPRING
};
using namespace std;
int main(){
    Estado estacionactual = AUTUMN;

    if (estacionactual == SPRING) {  
        cout<<"The Season of the Year is:  "<<SPRING;
    } else if (estacionactual == SUMMER) {  
        cout<<"The Season of the Year is:  "<<SUMMER;
    } else if (estacionactual == AUTUMN) {  
        cout<<"The Season of the Year is:  "<<AUTUMN;
    } else (estacionactual == WINTER) {  
        cout<<"The Season of the Year is:  "<<WINTER;
    }
}