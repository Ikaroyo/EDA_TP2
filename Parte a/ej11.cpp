#include <iostream>
#include <valarray>

int main() {
/*
 * Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
 */

    int n, i, suma = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    for (i = 1; i <= n; i++) {
        suma += pow(2, i);
    }
    std::cout << "El resultado es: " << suma << std::endl;


    return 0;
}
