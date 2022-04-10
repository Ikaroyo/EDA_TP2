#include <iostream>

int main() {
/*

Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es
simétrica si es cuadrada y si es igual a su matriz transpuesta

 */
    int n, m;
    std::cout << "Ingrese el numero de filas: ";
    std::cin >> n;
    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> m;

    int matriz[n][m];
    int matriz_transpuesta[m][n];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz_transpuesta[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (matriz[i][j] != matriz_transpuesta[i][j]) {
                std::cout << "La matriz no es simetrica" << std::endl;
                return 0;
            }
        }
    }

    //impresion de la matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }


    std::cout << "La matriz es simetrica" << std::endl;


    return 0;

}