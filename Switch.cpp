/* 
 * File:   Switch.cpp
 * Author: David
 *
 * Created on 19 de marzo de 2013, 10:44
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Trabajamos con switch
 */
int main(int argc, char** argv) {
    // Variable que guardara la letra introducida
    char letra;
    cout << "Escribe una letra: " << endl;
    // Para permitir al usuario introducir texto por teclado, usamos 'cin' (console in)
    cin >> letra;
    switch(letra){
        // Si hay casos que tienen que ejecutar el mismo codigo, los podemos colocar todos seguidos y ejecutar el codigo en el ultimo
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Es una vocal (" << letra << ")" << endl;
            break;
        default:
            cout << "'" << letra << "' es una consonante" << endl;
    }
    return 0;
}

