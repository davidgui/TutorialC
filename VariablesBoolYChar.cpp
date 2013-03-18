/* 
 * File:   VariablesBoolYChar.cpp
 * Author: David
 *
 * Created on 16 de marzo de 2013, 18:28
 */

#include <cstdlib>
#include <iostream>

using namespace std;

// Declaramos una variable de un caracter. IMPORTANTE, tiene que ir entre comillas simples ('')
char letra = 'd';

// Esta declaracion asigna letra2 = o, o lo que es lo mismo, la ultima letra
char letra2 = 'DavidRubio';

// Para escribir una cadena de texto, tenemos que agregar un * despues de char y ademas encerrarlo en comillas dobles ("")
char* cadena = "David Rubio Vidal";

// Booleanos: 0 o false y 1 o true. Cualquier numero distinto de 0, lo toma como 1
bool falso = false;
bool verdadero = true;

/*
 * Fundion que imprime variables char, char* y bool
 */
int main(int argc, char** argv) {
    cout << "letra = " << letra << " y letra2 = " << letra2 << endl;
    cout << "cadena = " << cadena << endl;
    // Al imprimir variables booleanas, nos imprime 0 para false y 1 para true
    cout << "falso = " << falso << "\nverdadero = " << verdadero << endl;
    return 0;
}

