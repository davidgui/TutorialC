/* 
 * File:   SentenciaIfElse.cpp
 * Author: David
 *
 * Created on 19 de marzo de 2013, 10:35
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int num1 = 12;
int num2 = 10;

/*
 * Trabajamos con sentencias if, else if y else
 */
int main(int argc, char** argv) {
    if(num1 < num2)
        cout << num1 << " es menor que " << num2 << endl;
    else if(num1 == num2)
        cout << num1 << " es igual que " << num2 << endl;
    else
        cout << num1 << " es mayor que " << num2 << endl;
    return 0;
}

