#include <iostream>


int main() {
/*
 * Ejercicio 14: Hacer un algoritmo que imprima los valores de la diagonal de una matriz D de 5x5.
 */
    int matriz[5][5];
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                std::cout << matriz[i][j] << " ";
            }
        }
    }
    return 0;

}
