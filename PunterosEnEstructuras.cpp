/* 
 * File:   PunterosEnEstructuras.cpp
 * Author: David
 *
 * Created on 20 de marzo de 2013, 12:07
 */

#include <iostream>

using namespace std;

// Declaramos una estructura y un puntero a ella
struct Estructura{
    int a;
    int b;
}miEstructura, *puntero;

/*
 * Trabajamos con punteros en estructuras
 */
int main() {
    miEstructura.a = 12;
    miEstructura.b = 100;
    // Guardamos la direccion de memoria de miEstructura en el puntero
    puntero = &miEstructura;
    
    cout << "La direccion de memoria de miEstructura es " << puntero << endl;
    /* Podemos obtener la direccion de memoria de una variable de la estructura
     * usando &nombreEstructura.nombreVariable
     */
    cout << "La direccion de memoria de 'b' usando &miEstructura.b es " << &miEstructura.b << endl;
    /* Para imprimir el valor de las variables del struct, usamos
     * puntero->nombreVariable
    */
    cout << "El valor de 'a' usando puntero->a es " << puntero->a << endl;
    return 0;
}

