#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números de tamaño 100, pero que
cargue por teclado n números, y los muestre en la salida estándar los números del vector con sus índices
asociados.


 */

    int vector[100];
    int n;
    int i;

    std::cout << "Introduce el numero de elementos del vector: ";
    std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "Introduce el elemento " << i << ": ";
        std::cin >> vector[i];
    }

    for (i = 0; i < n; i++) {
        std::cout << "El elemento " << i << " es " << vector[i] << std::endl;
    }

    getch();



    return 0;

}
