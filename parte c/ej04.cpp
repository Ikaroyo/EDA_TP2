#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números
aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla

 */

    int filas, columnas, i, j;

    std::cout << "Ingrese el numero de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> columnas;

    int matriz[filas][columnas];

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    int matriz2[filas][columnas];

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz2[i][j] = matriz[i][j];
        }
    }

    std::cout << "Matriz original: " << std::endl;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz copiada: " << std::endl;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            std::cout << matriz2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();


    return 0;

}