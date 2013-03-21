/* 
 * File:   DefinicionDeTipos.cpp
 * Author: David
 *
 * Created on 21 de marzo de 2013, 10:48
 */

#include <iostream>

using namespace std;

/*
 * Typedef sirve para cambiarle el nombre a los tipos de datos, para aquellos
 * que sean demasiado largos, si queremos cambiarle el nombre a otro idioma...
 * Uso: typedef tipoDeDato nuevoNombre
 */

typedef unsigned int uint;
typedef int entero;

/*
 * Trabajamos con typedef
 */
entero main() {
    uint numero = 10;
    cout << "El numero usando typedef es " << numero << endl;
    return 0;
}

