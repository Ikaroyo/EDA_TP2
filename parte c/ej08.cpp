#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

 */
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "] de la matriz 1: ";
            std::cin >> matriz1[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "] de la matriz 2: ";
            std::cin >> matriz2[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz3[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    std::cout << "Matriz 1: " << std::endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << matriz1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz 2: " << std::endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << matriz2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz 3: " << std::endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << matriz3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();

    return 0;

}