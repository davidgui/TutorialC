/* 
 * File:   VariableDouble.cpp
 * Author: David
 *
 * Created on 16 de marzo de 2013, 18:55
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Trabajamos con numeros decimales double que tiene mayor precision que float, ocupa mas espacio en la memoria
 */
int main(int argc, char** argv) {
    double num = 0.000000000000000000000000000000000000000000000006;
    double num2 = 1.3;
    cout << num << " + " << num2 << " = " << num + num2 << endl;
    return 0;
}

