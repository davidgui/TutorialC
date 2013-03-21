/* 
 * File:   WhileDoWhile.cpp
 * Author: David
 *
 * Created on 19 de marzo de 2013, 11:02
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Trabajamos con bucles while y do while
 */
int main(int argc, char** argv) {
    int i = 0;
    cout << "Inicio de la cuenta con bucle 'while'" << endl;
    while (i < 10){
        cout << i << endl;
        i++;
    }
    cout << "Fin de la cuenta con bucle 'while'" << endl;
    
    // El bucle do while siempre ejecuta el codigo al menos una vez y luego comprueba la condicion
    int j = 0;
    cout << "Inicio de la cuenta con bucle 'do while'" << endl;
    do{
        cout << j << endl;
        j++;
    }while (j < 10);
    cout << "Fin de la cuenta con bucle 'do while'" << endl;
    return 0;
}

