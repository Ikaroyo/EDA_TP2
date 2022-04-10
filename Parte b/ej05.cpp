#include <iostream>
#include <conio.h>


int main() {
/*

Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor
elemento del vector.


 */

    int vector[10];
    int mayor = 0;
    int i;

    for(i=0;i<10;i++){
        std::cout << "Ingrese un numero: ";
        std::cin >> vector[i];
    }

    for(i=0;i<10;i++){
        if(vector[i] > mayor){
            mayor = vector[i];
        }
    }

    std::cout << "El mayor es: " << mayor << std::endl;

    getch();


    return 0;

}
