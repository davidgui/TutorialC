/* 
 * File:   Cuentas.h
 * Author: David
 *
 * Created on 21 de marzo de 2013, 11:38
 */

#ifndef CUENTAS_H
#define	CUENTAS_H

/* Es una clase como lo puede ser una clase en Java. Tiene sus atributos y 
 * metodos, tanto public, private and protected (and local) 
 */
class Cuentas {
    // Accesible desde cualquier punto del programa
public:
    Cuentas();
    Cuentas(const Cuentas& orig);
    virtual ~Cuentas();
    int sumaDos(int arg);
    int sumaTres(int arg);
    // Acessible unicamente desde dentro de la clase o por elementos de su namespace
private:
    int resultado;
};

#endif	/* CUENTAS_H */

