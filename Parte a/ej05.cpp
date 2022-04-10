#include <iostream>

int main() {
/*

Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos. 

 */

    int numero;
    int suma = 0;

    do {
        std::cout << "Introduzca un numero: ";
        std::cin >> numero;
        if (numero > 0) {
            if (!(numero >= 20 && numero <= 30)) {
                suma += numero;
            }
        }
    } while ( ((numero<20) || (numero>30)) && (numero != 0));

    std::cout << "La suma de los numeros introducidos es: " << suma << std::endl;


    return 0;

}