//almecenar elementos 
#include <iostream>
using namespace std;

float promedio(int cantidad[], int canN){
    float promedio = 0;
    for (int i = 0; i < canN; i++){
        promedio += cantidad[i];
    }
    return promedio/canN;
}

int main (){
    int cantidad[0], canN, numA;
    cout << "ingrese la cantidad de valores del arreglo: "; cin >> canN;
    for (int i = 0; i < canN; i++){
        cout << "ingrese un valor del arreglo: "; cin >> numA;
        cantidad[i] = numA;
    }
    return 0;
}