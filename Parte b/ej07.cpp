#include <iostream>
#include <conio.h>

int main() {
/*

Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos
vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos
del segundo vector. Muestre el contenido del nuevo vector en la salida estándar


 */

    char vector1[5] = { 'a', 'b', 'c', 'd', 'e' };
    char vector2[5] = { 'f', 'g', 'h', 'i', 'j' };
    // vector3 that has size of vector1 + vector2
    char vector3[10] = {};



    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i];
    }

    for (int i = 0; i < 5; i++) {
        vector3[i + 5] = vector2[i];
    }

    for (int i = 0; i < 10; i++) {
        std::cout << vector3[i];
    }

    getch();

    return 0;

}
