#include <iostream>

int main() {
/*

Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
su tabla de multiplicar.

 */

    int numero;
    std::cout << "Ingrese un numero del 1 al 10: ";
    std::cin >> numero;

    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }


    return 0;

}