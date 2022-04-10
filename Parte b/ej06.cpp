#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número en el vector
cuyo valor equivale a la suma del resto de números del vector.


 */
    int n, i, j, suma;
    std::cout << "Introduce el numero de elementos del vector: ";
    std::cin >> n;
    int vector[n];
    for (i = 0; i < n; i++) {
        std::cout << "Introduce el valor del elemento " << i + 1 << ": ";
        std::cin >> vector[i];
    }

    for (i = 0; i < n; i++) {
        suma = 0;
        for (j = 0; j < n; j++) {
            if (i != j) {
                suma += vector[j];
            }
        }
        if (suma == vector[i]) {
            std::cout << "El numero " << vector[i] << " se encuentra en el vector y es la suma de los restantes elementos" << std::endl;
            break;
        }
    }

    if (i == n) {
        std::cout << "No se encuentra ningun numero en el vector";
    }

    getch();

    return 0;

}
