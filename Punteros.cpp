/* 
 * File:   Punteros.cpp
 * Author: David
 *
 * Created on 20 de marzo de 2013, 11:49
 */

#include <iostream>

using namespace std;

int numero = 12;
// Para declarar un puntero, tenemos que colocar antes de su nombre, un *
/* La siguiente sentencia guarda la direccion de memoria de numero (&) en el puntero
 * *puntero
*/
int *puntero = &numero;

/*
 * Trabajamos con punteros, que guardan direcciones de memoria
 */
int main() {
    // & es el operador de referencia y nos indica la direccion en memoria de una variable
    cout << "La direccion de memoria de numero es " << &numero << endl;
    cout << "La direccion de memoria (usando 'puntero') de numero es " << puntero << endl;
    // Si queremos acceder al valor de la variable usando punteros, lo hacemos usando *nombrePuntero
    cout << "El valor de numero es " << numero << endl;
    cout << "El valor de numero (usando *puntero) es " << *puntero << endl;
    return 0;
}

