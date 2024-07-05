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
}

int main (){
    return 0;
}
