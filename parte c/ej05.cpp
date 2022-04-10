#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 5: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original

 */
    int matriz[3][3];
    int matrizTraspuesta[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizTraspuesta[j][i] = matriz[i][j];
        }
    }

    std::cout << "Matriz original: " << std::endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matriz traspuesta: " << std::endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << matrizTraspuesta[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();

    return 0;

}