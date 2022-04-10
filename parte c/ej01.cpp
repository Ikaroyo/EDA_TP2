#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas,
Posteriormente mostrar la matriz en pantalla.

 */

    int filas, columnas;
    std::cout << "Introduce el numero de filas: ";
    std::cin >> filas;
    std::cout << "Introduce el numero de columnas: ";
    std::cin >> columnas;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "Introduce el valor de la posicion [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "Matriz: " << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();

    return 0;

}
