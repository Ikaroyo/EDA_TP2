#include <iostream>

int main() {
/*

Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10
primeros enteros mayores que cero

 */

    int suma = 0;
    for (int i = 1; i <= 10; i++) {
        suma += i * i;
    }
    std::cout << "La suma de los cuadrados de los 10 primeros enteros mayores que cero es: " << suma << std::endl;


    return 0;

}