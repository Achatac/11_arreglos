//temperatura minima y maxima 
#include <iostream> 
#include <string>
using namespace std;

float Media (float temMax,float temMin);
int diaM (float temMedia[]);
void TemPorT (float temMax);

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

void TemPorT (float temMax[]){

}



int main (){
    float temMax[7], temMin[7], temMedia[7];
    string dias[7] = {"Lunes", "Martes", "Miercoles","Jueves", "Viernes", "Sabado", "Domingo"};
    for (int i = 0; i < 7; i++){
        cout << "Ingrese la temperatura minima del " << dias[i] << " : "; cin >> temMin[i];
        cout << "Ingrese la temperatura maxima del " << dias[i] << " : "; cin >> temMax[i];
    }
    for (int j = 0; j < 7; j++){
        temMedia[j] = Media(temMax[j], temMin[j]);
        cout << "La temperatura media del " << dias[j] << " es:  " << temMedia[j] << endl;
    }
    int Dmin = diaM(temMedia);
    cout << "El dia con la temperatura minima es: " << dias[Dmin];
    return 0;
}