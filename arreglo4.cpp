//multiplos de un numero 
#include <iostream>
using namespace std;

void relleno(int arreglo[], int tam, int mult);

void relleno(int arreglo[], int tam, int mult){
    for (int i = 0; i < tam; i++ ){
        arreglo[i] = mult * (i+1);
    }
} 

int main (){
    int arreglo[100], tam, mult;
    cout << "Ingrese el tamano del arreglo (max 100): "; cin >> tam;
    cout << "Ingrese el multiplo del arreglo: "; cin >> mult;
    if (tam > 0 && tam <= 100){
    relleno(arreglo,tam,mult);
    cout << "El arreglo contiene los elementos: ";
    for (int j = 0; j < tam; j++ ){
        cout << arreglo[j] << "  ";
    }
    }
    else {
        cout << "El tamano del arreglo debe ser mayor que 0 y menor o igual a 100";
    }
    return 0;
}