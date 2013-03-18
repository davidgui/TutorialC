/* 
 * File:   VariablesEnteras.cpp
 * Author: David
 *
 * Created on 16 de marzo de 2013, 18:14
 */

#include <cstdlib>
// Incluimos la libreria que permite escribir en la consola
#include <iostream>

// La siguiente linea es necesaria para imprimir algo por pantalla usando la libreria iostream
// Si no escribimos esta linea, tenemos que llamar a cout con std::cout
using namespace std;

// Definimos una variable
int num = 34;
// Definimos otra variable
int num2 = 5;

int suma = num + num2;

/*
 * Aqui trabajamos imprimiendo variables 'int' por pantalla
 */
int main(int argc, char** argv) {
    // Esta es la manera de imprimir usando iostream
    cout << num << " + " << num2 << " = " << suma << endl;
    return 0;
}

