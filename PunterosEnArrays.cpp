/* 
 * File:   PunterosEnArrays.cpp
 * Author: David
 *
 * Created on 20 de marzo de 2013, 11:58
 */

#include <iostream>

using namespace std;

int array[5];
int *p;

/*
 * Punteros en arrays
 */
int main() {
    // p = &array[0]. Las variables de array apuntan SIEMPRE al PRIMER elemento
    p = array;
    cout << "Direccion en memoria de array " << &array << endl;
    cout << "Dreccion en memoria de array usando el puntero p " << p << endl;
    // Si queremos que el puntero apunte al siguiente elemento usamos p++
    p++;
    cout << "Direccion del siguiente elemento de array usando p++ " << p << endl;
    return 0;
}

