/* 
 * File:   IncludeYDefine.cpp
 * Author: David
 *
 * Created on 19 de marzo de 2013, 23:14
 */

/*
 * Existen dos formas de añadir/incluir archivos/librerias externas
 * #include <...>: busca busca en las librerias predefinidas de C++
 * #include "...": busca primero en carpetas locales y si no lo encuentra, busca en las librerias predefinidas de C++
 */

#include "Cabecera.h"

/*
 * #define se utiliza para definir macros
 * #define nombreMacro(argumentos) macro
 */

#define sumar(a,b) a + b
#define multiplicar(a,b) a * b
#define dividir(a,b) a / b

using namespace std;

int num1 = 10;
int num2 = 5;

/*
 * Vamos a trabajar con la libreria 'iostream' que la incluimos desde Cabecera.h 
 */
int main(int argc, char** argv) {
    cout << "Usando iostream desde un archivo .h" << endl;
    cout << "Sumando con #define sumar(" << num1 << ", " << num2 << ") = " << sumar(num1, num2) << endl; 
    cout << "Multiplicando con #define multiplicar(" << num1 << ", " << num2 << ") = " << multiplicar(num1, num2) << endl;
    cout << "Dividiendo con #define dividir(" << num1 << ", " << num2 << ") = " << dividir(num1, num2) << endl;
    return 0;
}

