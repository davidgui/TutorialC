/* 
 * File:   Constantes.cpp
 * Author: David
 *
 * Created on 18 de marzo de 2013, 17:56
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* Para declarar una constante, lo hacemos con 'const'. Si intentamos cambiar
 * dicha constante a lo largo del codigo, nos dara un error indicando que es 
 * una variable de solo lectura.
 * Ademas, hay que declararla y asignarle valor en una sola linea
*/
const int num = 12;

int main(int argc, char** argv) {
    cout << "La constante num es " << num << endl;
    return 0;
}

