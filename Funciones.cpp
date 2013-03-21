/* 
 * File:   Funciones.cpp
 * Author: David
 * 
 * Created on 20 de marzo de 2013, 10:41
 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int suma;

/*
 * Funcion que no devuelve nada, simplemente imprime un mensaje por pantalla
 */
void funcion(){
    cout << "Funcion que no devuelve nada, void" << endl;
}

/*
 * Funcion sumar que suma los dos numeros que se le pasa como parametros
 * IMPORTANTE hay que declarar la funcion ANTES del main
 */
int sumar(int a, int b){
    return (a) + (b);
}

/*
 * Esta funcion tendra parametros por defecto en caso de que al llamarla, lo
 * lo hagamos sin parametros.
 * Lo primero que hacemos es una especie de "prototipo de la funcion", es 
 * decir la creamos sin cuerpo, y posteriormente definimos el cuerpo.
 * num = 2 va a ser el valor por defecto cuando llamamos a esta funcion sin 
 * parametros, es decir, funcionParamPorDefecto()
 */
void funcionParamPorDefecto(int num = 2);


/*
 * La funcion main es la funcion principal del programa. Normalmente devuelve un
 * entero que suele ser 0 para indicar que no ha habido errores.
 * La funcion main es especial dentro del programa y no es necesario llamarla 
 * para que funcione, si no que el compilador ejecuta su codigo directamente
 */
int main(){
    suma = sumar(4,2);
    cout << suma << endl;
    funcion();
    funcionParamPorDefecto();
    funcionParamPorDefecto(12);
    return 0;
}

/*
 * Creamos el cuerpo de la funcion funcionParamPorDefecto. Lo que esta funcion
 * va a hacer es:
 *  - Si la llamamos con un entero como parametro, imprimira dicho entero +3
 *  - Si la llamamos sin parametro, imprimira la suma de 2 (parametro por
 * defecto en la declaracion de arriba) y 3
 */
void funcionParamPorDefecto(int num){
    cout << "Funcion funcionParamPorDefecto con num = " << num << ": " << (num + 3) << endl;
}
