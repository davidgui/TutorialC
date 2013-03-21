/* 
 * File:   ArraysYFor.cpp
 * Author: David
 *
 * Created on 19 de marzo de 2013, 11:13
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Trabajamos con arrays y bucles for
 */
int main(int argc, char** argv) {
    // Para declarar un array usamos []
    char c[4] = {'H','o','l','a'};
    /*c[0] = 'H';
    c[1] = 'o';
    c[2] = 'l';
    c[3] = 'a';*/
    
    for (int i = 0; i < 4; i++){
        // Para imprimir en la misma linea, no usamos 'endl' al final de cout
        cout << c[i];
    }
    cout << endl;
    return 0;
}

