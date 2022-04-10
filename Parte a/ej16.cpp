#include <iostream>


int main() {
/*

Ejercicio 16: Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los números negativos
y en un vector B todos los positivos o iguales a cero

 */

    int V[20] = {-1,2,-3,4,5,6,-7,0,9,10,-11,12,13,-5,15,16,17,-18,19,20};
    int A[20] = {};
    int B[20] = {};
    int i = 0;
    int j = 0;

    for(i = 0; i < 20; i++){
        if(V[i] < 0){
            A[j] = V[i];
            j++;
        }
    }
    for(i = 0; i < 20; i++){
        if(V[i] >= 0){
            B[j] = V[i];
            j++;
        }
    }
    for(i = 0; i < 20; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
    for(i = 0; i < 20; i++){
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;



    return 0;

}