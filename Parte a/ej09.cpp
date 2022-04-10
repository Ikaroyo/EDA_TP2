#include <iostream>

int main() {
/*
 * Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
 */
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;


    return 0;
}
