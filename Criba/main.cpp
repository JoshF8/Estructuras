#include <QCoreApplication>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int primo(int a);
int main(int argc, char *argv[])
{
    int n = 0, primos = 0;
    cout << "Ingrese un numero n\n";
    cin >> n;
    int *numeros = new int[n + 1];
    if(n > 1){
        primos++;
        for(int i = 0; i < n; i++){
            numeros[i] = 1;
        }
        numeros[0] = 0;
        numeros[1] = 0;
        for(int i = 2; i < n + 1; i++){
            if(numeros[i] == 1){
                numeros[i] = primo(i);
                if(primo(i) == 1){
                    for(int j = i + 1; j < n + 1; j++){
                        if(j%i == 0){
                            numeros[j] = 0;
                        }
                    }
                }
                if((i*i) > n){
                    break;
                }
            }
        }
    }
    if(primos == 0){
        cout << "No hay numeros primos menores a " << n << "\n";
    }else{
        for(int i = 2; i < n +1; i++){
            if(numeros[i] == 1){
                cout << i << "\n";
            }

        }
    }
}

int primo(int valor){
    for(int i = 2; i < valor; i++){
        if(valor%i == 0)
            return 0;
    }
    return 1;
}
