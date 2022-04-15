#include <iostream>

int main() {
    /*  Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24
horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja. */
    int temp, max, min;
    float suma=0;
    std::cout << "Ingrese la temperatura: ";
    std::cin >> temp;
    suma=suma+temp;
    max = temp;
    min = temp;
    for (int i = 0; i < 6; i++) {
        std::cout << "Ingrese la temperatura: ";
        std::cin >> temp;
        suma += temp;
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }
    std::cout << "La temperatura media es: " << suma / 4 << std::endl;
    std::cout << "La temperatura maxima es: " << max << std::endl;
    std::cout << "La temperatura minima es: " << min << std::endl;
    return 0;
}
