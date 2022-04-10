#include <iostream>

int main() {
/*

Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.

 */


    int numero;
    int contador = 0;
    std::cout << "Introduzca un numero: ";
    std::cin >> numero;
    while (numero != 0) {
        if (numero > 0) {
            contador++;
        }
        std::cout << "Introduzca un numero: ";
        std::cin >> numero;
    }
    std::cout << "El numero de numeros mayores que cero es: " << contador << std::endl;

    return 0;

}