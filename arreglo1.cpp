//sumatoria y porcentaje 
#include <iostream>
using namespace std;
int main (){
    int sumatoria, porcentaje, CantDatos, ceros;
    ceros = 0;
    cout << "Ingrese la cantidad de datos: "; cin >> CantDatos;
    int arreglo[CantDatos];
    for (int i=0; i < CantDatos; i++){
        cout << "Ingrese el dato "; cin >> arreglo [i];
        if (arreglo[i] != 0){
            sumatoria += arreglo[i];
        } else {
            ceros++;
        }
    }
    porcentaje = (ceros * 100) / CantDatos;
    cout << "La sumatoria de los datos es: " << sumatoria << endl;
    cout << "El porcentaje de ceros es: " << porcentaje << "%" << endl;
}
