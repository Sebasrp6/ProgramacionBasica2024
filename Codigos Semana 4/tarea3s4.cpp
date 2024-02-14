#include<iostream>

using namespace std;
int main (){
    int i,j,k;
    
    cout<<"Ingrese la dimension de tu matriz cuadrada: "<<endl;
    cin>>i;

    int matriz_O [i] [i];
    int matriz_T [i] [i];

    for (j = 0; j < i; j++){
    
    for (k = 0; k< i; k++){
        cout<<"Ingrese los elementos de tu matriz cuadrada("<<j+1<<","<<k+1<<")"<<endl;
        cin>> matriz_O [j][k];
    }
    }
    
    for (j = 0; j <i; j++){
        for(k = 0; k < i; k++){
            matriz_T [k][j] = matriz_O [j][k];
        }
    }

    cout<<"\nMatriz transpuesta"<<endl;
    for (j = 0; j < i; j++){
        for(k = 0; k < i; k++){
            cout<<matriz_T [j][k]<<" ";
        }
        cout<<endl;
    }


    return 0;
}