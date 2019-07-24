#include <QCoreApplication>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int meses[] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int A[] = {5, 3, 1, 0};
    int d, m, a, diaFinal = 0;
    string dias[] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    cout << "Ingrese el dia.\n";
    cin >> d;
    cout << "Ingrese el mes.\n";
    cin >> m;
    cout << "Ingrese el año.\n";
    cin >> a;
    if(a > 2099 || a < 1700){
        cout << "El año que ingreso no esta en el rango del programa.";
    }else if(m > 12 || m < 1){
        cout << "El mes que ingreso no esta en el rango del programa.";
    }else{
        diaFinal += A[(a/100)-17];
        diaFinal += (a%100) + (a%100)/4;
        if(m < 3){
            if(a%100 == 0){
                if(a%400 == 0){
                    diaFinal--;
                }
            }else{
                if(a%4 == 0){
                    diaFinal--;
                }
            }
        }
        diaFinal += meses[m - 1];
        diaFinal += d;
        cout << "El dia de la semana sera " << dias[diaFinal%7] << "\n";
    }
}
