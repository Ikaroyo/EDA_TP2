#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en
orden inverso—del último al primer elemento.


 */

    int vector[5] = {0, 1, 2, 3, 4};


    for (int i = 4; i >= 0; i--) {
        std::cout << vector[i] << std::endl;
    }

    getch();
    return 0;

}
