#include "bolsa.h"

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Elemento {
public:
    elemento siguiente = null;
};

class Bolsa{
public:
    Elemento elemento = null;
    Bolsa(){}
    Bolsa(Elemento elemento){}
    Bolsa bolsavacia();
    Bolsa poner(Bolsa bolsa, Elemento elemento);
    Bool esvacia(Bolsa bolsa);
    int cuantos(Bolsa bolsa, Elemento elemento);
};

Bolsa Bolsa::bolsavacia(){
    Bolsa bolsa = new Bolsa();
    return bolsa;
}

Bolsa Bolsa::poner(Bolsa bolsa, Elemento elemento){
    Elemento tmp = bolsa.elemento, tmp1 = bolsa.elemento;
    while(tmp != null){
        tmp1 = tmp;
        tmp = tmp.siguiente;
    }
    tmp1.siguiente = elemento;
    return bolsa;
}

Bool Bolsa::esvacia(Bolsa bolsa){
    return !bolsa.elemento;
}

int Bolsa::cuantos(Bolsa bolsa, Elemento elemento){
    if(bolsa.elemento){
       return = 0;
    }else{
        Elemento tmp = bolsa.elemento, tmp1 = bolsa.elemento;
        int num = 0;
        while(tmp != null){
            num++;
            tmp1 = tmp;
            tmp = tmp.siguiente;
        }
        tmp1.siguiente = elemento;
        return num;
    }
}




