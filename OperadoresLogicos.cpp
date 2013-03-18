/* 
 * File:   OperadoresLogicos.cpp
 * Author: David
 *
 * Created on 18 de marzo de 2013, 22:10
 */

#include <cstdlib>
#include <iostream>

using namespace std;

bool comprobacion;
int num1, num2, num3, num4;
char* aux;

/*
 * Trabajamos con operadores logicos 
 */
int main(int argc, char** argv) {
    num1 = 12;
    num2 = 20;
    num3 = 4;
    num4 = 13;
    
    comprobacion = (num4 > num1 && num3 < num2);
    if (comprobacion)
        aux = "\nSi";
    else
        aux = "\nNo";
    cout << num4 << " > " << num1 << " y " << num3 << " < " << num2 << "?" << aux << endl;
    
    comprobacion = (num4 > num1 || num3 > num2);
    if (comprobacion)
        aux = "\nSi";
    else
        aux = "\nNo";
    cout << num4 << " > " << num1 << " o " << num3 << " > " << num2 << "?" << aux << endl;
    
    return 0;
}

