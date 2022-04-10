#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 2: Escribe un programa usando un for, que defina un vector de números y calcule la multiplicación
acumulada de sus elementos. Use la librería conio.h, y la función getch().


 */

    int vector[10];
    int multiplicacion = 1;
    int i;
    for (i = 0; i < 10; i++) {
        std::cout << "Introduce un numero: ";
        std::cin >> vector[i];
        multiplicacion = multiplicacion * vector[i];
    }
    std::cout << "La multiplicacion acumulada es: " << multiplicacion << std::endl;
    getch();

    return 0;

}
