//nombres de estudiantes 
#include <iostream>
#include <string>
using namespace std;
int main (){
    int tamPG, tamFP, tamC;
    string PG[100]; FP[100], NomC[100];
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
}