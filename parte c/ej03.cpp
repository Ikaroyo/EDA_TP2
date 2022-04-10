#include <iostream>
#include <conio.h>

int main() {
/*

Ejercicio 3: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el contenido de
M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo

 */

    int M1[2][2] = { {1,2},{3,4} };
    int M2[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            M2[i][j] = M1[i][j] + 1;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << M2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    getch();

    return 0;

}
