//nombres de estudiantes 
#include <iostream>
#include <string>
using namespace std;
int main (){
    int tamPG, tamFP, tamC;
    string PG[100];
    string FP[100]; 
    string NomC[100];
    cout << "Ingrese la cantidad de estudiantes de FP: "; cin >> tamFP;
    cout << "Ingrese los nombres de los estudiates de FP: " << endl;
    for (int i = 0; i < tamFP; i++){
        cin >> FP[i];
    }

    cout << "Ingrese la cantidad de estudiantes de PG: "; cin >> tamPG;
    cout << "Ingrese los nombres de los estudiates de PG: " << endl;
    for (int j = 0; j < tamPG; j++){
        cin >> PG[j];
    }

    tamC = 0;
    for (int k = 0; k < tamFP;++k) {
        for (int w = 0; w < tamPG; ++w) {
            if (FP[k] == PG[w]) {
                NomC[tamC++] = FP[k];
                break;
            }
        }
    }
    if (tamC > 0){
        cout << "La cantidad de nombres comunes es: " << tamC;
        for (int p = 0; p < tamC; p++){
            cout << NomC[p] << " " ;
        }
    }
    else {
        cout << "no existen nombres comunes";
    }
    return 0;
}