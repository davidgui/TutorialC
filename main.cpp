/* 
 * File:   Cuentas.cpp
 * Author: David
 *
 * Created on 21 de marzo de 2013, 11:25
 */

#include <iostream>
#include "Cuentas.h"

using namespace std;

/*
 * Trabajamos con un objeto de la clase Cuentas
 */
int main() {
    Cuentas cuenta;
    int num = 10;
    cout << "sumaDos(" << num << ") = " << cuenta.sumaDos(num) << endl;
    cout << "sumaTres(" << num << ") = " << cuenta.sumaTres(num) << endl;
    return 0;
}

