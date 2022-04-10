#include <iostream>

int main() {
    /* Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.  */

    int x, y, resultado;

    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;
    std::cout << "Ingrese el valor de y: ";
    std::cin >> y;

    resultado = 1;
    for (int i = 0; i < y; i++) {
        resultado *= x;
    }
    std::cout << "El resultado es: " << resultado << std::endl;


    return 0;
}
