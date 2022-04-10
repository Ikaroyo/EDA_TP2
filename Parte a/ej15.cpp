#include <iostream>


int main() {
/*
Ejercicio 15: Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo que escriba SI, si el vector esta
ordenado ascendentemente, o NO si el vector no está ordenado

 */
    int A[100];
    int i;
    int j;
    int aux;
    int flag = 0;

    /* creo un array de 100 elementos  en orden ascendente*/
    for (i = 0; i < 100; i++) {
        A[i] = i;
    }

    /* recorro el array y comparo si el elemento anterior es mayor al actual, si es asi, cambio el valor de la bandera*/
    for (i = 0; i < 99; i++) {
        if (A[i] > A[i + 1]) {
            flag = 1;
        }
    }

    /* si la bandera es 1, el vector no esta ordenado, si es 0, esta ordenado*/

    if (flag == 1) {
        std::cout << "NO";
    } else {
        std::cout << "SI";
    }

    /* recorro el array y lo imprimo*/

    std::cout << std::endl;
    /* print the array */
    for (i = 0; i < 100; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;

}
