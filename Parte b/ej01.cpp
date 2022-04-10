#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 1: Escribe un programa que con While, defina un vector de números y calcule la suma de sus elementos.
Use la librería conio.h, y la función getch().

 */
    int n, suma = 0;
    std::cout << "Introduce el numero de elementos del vector: ";
    std::cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Introduce el elemento " << i + 1 << ": ";
        std::cin >> vector[i];
    }
    for (int i = 0; i < n; i++) {
        suma += vector[i];
    }
    std::cout << "La suma de los elementos del vector es: " << suma << std::endl;
    getch();

    return 0;

}
