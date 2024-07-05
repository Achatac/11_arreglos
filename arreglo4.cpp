//multiplos de un numero 
#include <iostream>
using namespace std;

int relleno(int arreglo[], int tam);

int relleno(int arreglo[], int tam){
    int mult;
    cout << "Ingrese el multiplo dentro del arreglo: "; cin >> mult;
    for (int i = 0; i < tam; i++ ){
        arreglo[i] = mult * (i+1);
    }
    return arreglo[];
} 

int main (){
    int arreglo[100], tam;
    cout << "Ingrese el tamano del arreglo: "; cin >> tam;
    relleno(arreglo,tam);
    cout << "El arreglo contiene los elementos: ";
    for (int j = 0; j < tam; j++ ){
        cout << arreglo[j] << "  ";
    }
    return 0;
}
