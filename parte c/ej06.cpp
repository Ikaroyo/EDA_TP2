#include <iostream>
#include <conio.h>

int main() {
/*

Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

 */

    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];
    int suma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "] de la matriz 1: ";
            std::cin >> matriz1[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "] de la matriz 2: ";
            std::cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma = matriz1[i][j] + matriz2[i][j];
            matriz3[i][j] = suma;
        }
    }

    std::cout << "La suma de las matrices es: " << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matriz3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();

    return 0;

}