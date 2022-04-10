#include <iostream>
#include <valarray>

int main() {
/*
 * Ejercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el - 1 1 2 3 5 8
13...hasta n
 */
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    std::valarray<int> fibonacci(n);
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    std::cout << "Serie Fibonacci: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
