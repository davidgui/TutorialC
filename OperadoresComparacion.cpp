/* 
 * File:   OperadoresComparacion.cpp
 * Author: David
 *
 * Created on 18 de marzo de 2013, 21:57
 */

#include <cstdlib>
#include <iostream>

using namespace std;

bool comprobacion;
char* aux;
int num1 = 11;
int num2 = 12;

/*
 * Trabajamos con operadores de comparacion
 */
int main(int argc, char** argv) {
    comprobacion = (num1 == num2);
    if (comprobacion)
        aux = "\nSi";
    else
        aux = "\nNo";
    cout << num1 << " = " << num2 << "?" << aux << endl;
    
    comprobacion = (num1 != num2);
    if (comprobacion)
        aux = "\nSi";
    else
        aux = "\nNo";
    cout << num1 << " != " << num2 << "?" << aux << endl;
    
    comprobacion = (num1 < num2);
    if (comprobacion)
        aux = "\nSi";
    else
        aux = "\nNo";
    cout << num1 << " < " << num2 << "?" << aux << endl;
    
    comprobacion = (num1 > num2);
    if (comprobacion)
        aux = "\nSi";
    else
        aux = "\nNo";
    cout << num1 << " > " << num2 << "?" << aux << endl;
    return 0;
}

