//arreglos de pares e impares 
#include <iostream>
using namespace std;

int main (){
    int CantDatos, datos[60], pares[30], impares[30], contPares = 0, contImpares = 0;
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
    cout << "La cantidad de pares es: " << contPares << endl;
    for (int j=0; j < contPares; j++){
        cout << pares[j] << " ";
    }
    cout << endl << "La cantidad de impares es: "<< contImpares << endl;
    for (int k=0; k < contImpares; k++){
        cout << impares[k] << " ";
    }
    return 0;
}
