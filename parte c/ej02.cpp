#include <iostream>
#include <conio.h>

int main() {
/*

Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal
principal de la matriz.

 */

    int matriz[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                std::cout << matriz[i][j] << " ";
            }
        }
    }

    getch();

    return 0;

}
