//temperatura minima y maxima 
#include <iostream> 
#include <string>
using namespace std;

float Media (float temMax,float temMin);
int diaM (float temMedia[]);

float Media (float temMax, float temMin){
    return (temMax + temMin)/2.0;
}
int diaM(float temMedia[]) {
    int M = 0;
    for (int k = 1; k < 7; k++) {
        if (temMedia[k] < temMedia[M]) { 
            M = k;
        }
    }
    return M;
}

int main (){
    float temMax[7], temMin[7], temMedia[7], tem;
    string dias[7] = {"Lunes", "Martes", "Miercoles","Jueves", "Viernes", "Sabado", "Domingo"};
    bool hayMax;
    for (int i = 0; i < 7; i++){
        cout << "Ingrese la temperatura minima del " << dias[i] << " : "; cin >> temMin[i];
        cout << "Ingrese la temperatura maxima del " << dias[i] << " : "; cin >> temMax[i];
    }

    for (int j = 0; j < 7; j++){
        temMedia[j] = Media(temMax[j], temMin[j]);
        cout << "La temperatura media del " << dias[j] << " es:  " << temMedia[j] << endl;
    }

    int Dmin = diaM(temMedia);
    cout << "El dia con la temperatura minima es: " << dias[Dmin] <<endl;
    cout << "Ingrese un valor de temperatura: "; cin >> tem;
    cout << endl;
    for (int w = 0; w < 7; w++) {
        if (tem == temMax[w]) {
            hayMax = true;
            break;
        }
    }
    if (hayMax) {
        cout << "Los dias con temperatura maxima que coinciden son: ";
        for (int e = 0; e < 7; e++) {
            if (tem == temMax[e]) {
                cout << dias[e] << " ";
            }
        }
    }
    else {
        cout << "No existe ningun dia con temperatura maxima que coincida." << endl;
    }
    return 0;
}