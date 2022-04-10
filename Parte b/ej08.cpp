#include <iostream>
#include <conio.h>
#include <vector>

int main() {
/*

Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y
muestre el segundo arreglo.



 */

    int numero;
    std::vector<int> arreglo1;
    std::vector<int> arreglo2;

    for(int i = 0; i < 5; i++){
        std::cout << "Ingrese un numero: ";
        std::cin >> numero;
        arreglo1.push_back(numero);
    }

    for(int i = 0; i < 5; i++){
        arreglo2.push_back(arreglo1[i] * 2);
    }

    for(int i = 0; i < 5; i++){
        std::cout << arreglo2[i] << std::endl;
    }

    getch();

    return 0;

}
