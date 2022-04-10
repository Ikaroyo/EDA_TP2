#include <iostream>

int main() {
/*

Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

 */

    int n,suma=0,factorial=1;

    std::cout<<"Digite el total de elementos a sumar: ";
    std::cin>>n;

    for(int i=1;i<=n;i++){
        factorial *= i; //primero sacamos los factoriales
        suma +=factorial; //luego los sumamos
    }

    std::cout<<"\nLa suma de factoriales es: "<<suma<<std::endl;


    return 0;

}