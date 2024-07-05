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
    int arreglo[100], tam;
    cout << "Ingrese el tamano del arreglo: "; cin >> tam;
    cout << "Ingrese el multipplo del arreglo: "; cin >> mult;
    relleno(arreglo,tam,mult);
    cout << "El arreglo contiene los elementos: ";
    for (int j = 0; j < tam; j++ ){
        cout << arreglo[j] << "  ";
    }
    return 0;
}