//temperatura minima y maxima 
#include <iostream> 
#include <string>
using namespace std;

void Media (float temMax[],float temMin[]);
void diaM (float temMax[],float temMin[]);
void TemPorT (float temMax[]);

void Media (float temMax[],float temMin[]){
    
}
void diaM (float temMax[],float temMin[]){

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
        temMedia[k] = Media(temMax, temMin);
        cout << "La temperatura media del " << dias[j] << " es:  " << temMedia[k];
    }
    return 0;
}