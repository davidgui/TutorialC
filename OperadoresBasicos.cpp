/* 
 * File:   OperadoresBasicos.cpp
 * Author: David
 *
 * Created on 18 de marzo de 2013, 18:02
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int numero = 12;
int numero2 = 10;

int suma;
int resta;
int multiplicacion;
int division;
int resto;

int opAsignacion;

/*
 * Trabajamos con operadores basicos
 */
int main(int argc, char** argv) {
    // OPERADORES ARITMETICOS
    suma = numero + numero2;
    cout << numero << " + " << numero2 << " = " << suma << endl;
    
    resta = numero - numero2;
    cout << numero << " - " << numero2 << " = " << resta << endl;
    
    multiplicacion = numero * numero2;
    cout << numero << " x " << numero2 << " = " << multiplicacion << endl;
    
    division = numero / numero2;
    cout << numero << " : " << numero2 << " = " << division << endl;
    
    resto = numero % numero2;
    cout << numero << " % " << numero2 << " = " << resto << endl;
    
    // OPERADORES DE ASIGNACION
    opAsignacion = 10;
    cout << "opAsignacion = 10 --> " << opAsignacion << endl;
    
    opAsignacion += 3;
    cout << "opAsignacion += 3 --> " << opAsignacion << endl;
    
    opAsignacion -= 3;
    cout << "opAsignacion -= 3 --> " << opAsignacion << endl;
    
    opAsignacion *= 3;
    cout << "opAsignacion *= 3 --> " << opAsignacion << endl;
    
    opAsignacion /= 3;
    cout << "opAsignacion 3= 3 --> " << opAsignacion << endl;
    return 0;
}

