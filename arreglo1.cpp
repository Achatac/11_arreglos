//almecenar elementos 
#include <iostream>
using namespace std;

int sumatoria(int cantidad[], int canN);
int porcentaje(int cantidad[]);

int sumatoria(int cantidad[], int canN){
    int sumatoria = 0;
    for (int i = 0; i < canN; i++){
        sumatoria += cantidad[i];
    }
    return sumatoria;

int main (){
    int canN, numA;
    cout << "ingrese la cantidad de valores del arreglo: "; cin >> canN;
    int cantidad[canN];
    for (int i = 0; i < canN; i++){
        cout << "ingrese un valor del arreglo: "; cin >> numA;
        cantidad[i] = numA;
    }
    promedio (cantidad, canN);

    return 0;
}