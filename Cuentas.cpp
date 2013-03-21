/* 
 * File:   Cuentas.cpp
 * Author: David
 * 
 * Created on 21 de marzo de 2013, 11:38
 */

#include "Cuentas.h"
#include <iostream>
using namespace std;

Cuentas::Cuentas() {
    cout << "Nuevo objeto Cuentas creado" << endl;
}

Cuentas::Cuentas(const Cuentas& orig) {
}

Cuentas::~Cuentas() {
}

// Los metodos definidos dentro de la clase, se desarrollan fuera
int Cuentas::sumaDos(int arg) {
    resultado = arg + 2;
    return resultado;
}

int Cuentas::sumaTres(int arg) {
    resultado = arg + 3;
    return resultado;
}
