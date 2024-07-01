//arreglos de pares e impares 
#include <iostream>
using namespace std;

int main (){
    int CantDatos, datos[60], pares[30], impares[30], contPares, contImpares;
    cout << "Ingrese la cantidad de datos: "; cin >> CantDatos;
    for (int i=0; i < CantDatos; i++){
        cout << "Ingrese el dato: "; cin >> datos [i];
        if (datos[i] % 2 == 0){
            pares[contPares] = datos[i];
            contPares++;
        } else {
            impares[contImpares] = datos[i];
            contImpares++;
        }
    }
}
