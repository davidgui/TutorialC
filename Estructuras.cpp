/* 
 * File:   Estructuras.cpp
 * Author: David
 *
 * Created on 20 de marzo de 2013, 11:05
 */

#include <iostream>

using namespace std;

/*
 * Trabajamos con estructuras, que son un tipo de variables estructuradas, en 
 * las cuales se pueden guardar varios datos sin importar de que tipo sean. Son 
 * parecidos a los objetos de JSON
 */
int main() {
    // Inicializamos la variable (aunque no es necesario hacerlo en C++)
    struct Personaje{
        int edad;
        int tel;
        
    }David;
    // Asignamos valores a los parametros del struct Personaje{}David
    David.edad = 25;
    David.tel = 775613495;
    cout << "David tiene " << David.edad << " anios y su numero de telefono es " << David.tel << endl;
    
    // Otra estructura con funciones dentro de la propia estructura
    struct Hogar{
        int numeroDireccion;
        int numeroTel;
        // Constructor para asignarle valor a las variables por defecto
        Hogar(){numeroDireccion = 0; numeroTel = 2;}
        // Otro tipo de funciones
        int verDireccion(){return numeroDireccion;}
        void guardaDir(int dir){numeroDireccion = dir;}
    }Fernandez, Gonzalez, Perez;
    
    Fernandez.numeroDireccion = 45;
    Fernandez.numeroTel = 1034;
    
    Gonzalez = Fernandez;
    cout << "El numero de telefono de los Gonzalez es: " << Gonzalez.numeroTel << endl;
    cout << "Valores de los Perez, quienes tiene valores por defecto. NumeroDireccion = " << Perez.numeroDireccion << " y numeroTel = " << Perez.numeroTel << endl;
    cout << "Vemos la direccion de los Fernandez usando la funcion verDireccion(): " << Fernandez.verDireccion() << endl;
    cout << "Cambiamos la direccion de los Fernandez usando guardaDir(int dir)" << endl;
    Fernandez.guardaDir(1234);
    cout << "La direccion de los Fernandez tras el cambio es: " << Fernandez.verDireccion() << endl;
    return 0;
}

