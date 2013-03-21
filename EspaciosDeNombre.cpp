/* 
 * File:   EspaciosDeNombre.cpp
 * Author: David
 *
 * Created on 20 de marzo de 2013, 11:34
 */

#include <iostream>

/*
 * Un espacio con nombre, como indica su denominación, es una zona separada 
 * donde se pueden declarar y definir objetos, funciones y en general, cualquier
 * identicador de tipo, clase, estructura, etc; al que se asigna un nombre o 
 * identificador propio.
 * Hasta ahora, en nuestros programas, siempre habíamos declarado y definido 
 * nuestros identificadores fuera de cualquier espacio con nombre, en lo que se 
 * denomina el espacio global. En este capítulo veremos que podemos crear tantos
 * espacios para identificadores como necesitemos.
 * En cuanto a la utilidad los espacios con nombre, veremos nos ayudan a evitar
 * problemas con identificadores en grandes proyectos o cuando se usan 
 * bibliotecas externas. Nos permite, por ejemplo, que existan objetos o 
 * funciones con el mismo nombre, declarados en diferentes ficheros fuente, 
 * siempre y cuando se declaren en distintos espacios con nombre.
 */
namespace ciudad{
    int calle;
}

namespace pueblo{
    int calle = 10;
}

using namespace ciudad;
using namespace std;

/*
 * Trabajamos con diferentes namespaces
 */
int main() {
    // La siguiente variable 'calle' procede del namespace 'ciudad'
    calle = 12; 
    /* Para usar un namespace que no hemos incluido con 'using' tenemos que usar
     * nombreNamespace::(variable|funcion)
     * A continuacion, imprimimos la calle de pueblo
     */
    cout << "El numero de calle de pueblo es: " << pueblo::calle << endl;
    /* Imprimimos la calle de ciudad. NO es necesario usar :: porque ya hemos
     * incluido el namespace ciudad con 'using'
    */
    cout << "El numero de calle de ciudad es: " << calle << endl;
    return 0;
}

