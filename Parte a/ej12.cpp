#include <iostream>
#include <valarray>

int main() {
/*
 * Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
 */
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;
    int resultado = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            resultado -= i;
        } else {
            resultado += i;
        }
    }
    std::cout << "El resultado es: " << resultado << std::endl;


    return 0;
}
