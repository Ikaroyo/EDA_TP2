#include <iostream>

int main() {
/*
 * Ejercicio 7: A-Escriba un programa que calcule usando un while, el valor de: 1+2+3+...+n. B-Escriba un programa que
calcule usando un for, el valor de: 1+3+5+...+2n-1
 */
    int n;

    int suma = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        suma = suma + (2 * i - 1);
    }
    std::cout << "La suma de los numeros del 1 al " << n << " es: " << suma << std::endl;


    return 0;
}
