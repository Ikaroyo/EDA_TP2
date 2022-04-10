#include <iostream>

int main() {
/*
 Ejercicio 8: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: a)
Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c) Alumnos que
aprobaron únicamente el último examen.
 */

    int aprobados = 0;
    int aprobados_almenos_uno = 0;
    int aprobados_ultimo = 0;

    for (int i = 0; i < 5; i++) {
        int nota_examen1 = 0;
        int nota_examen2 = 0;
        int nota_examen3 = 0;

        std::cout << "Ingrese la nota del examen 1: ";
        std::cin >> nota_examen1;
        std::cout << "Ingrese la nota del examen 2: ";
        std::cin >> nota_examen2;
        std::cout << "Ingrese la nota del examen 3: ";
        std::cin >> nota_examen3;

        if (nota_examen1 >= 7 && nota_examen2 >= 7 && nota_examen3 >= 7) {
            aprobados++;
        }

        if (nota_examen1 >= 7 || nota_examen2 >= 7 || nota_examen3 >= 7) {
            aprobados_almenos_uno++;
        }

        if (nota_examen1 < 7 && nota_examen2 < 7 && nota_examen3 >= 7) {
            aprobados_ultimo++;
        }
    }

    std::cout << "Alumnos que aprobaron todos los exámenes: " << aprobados << std::endl;
    std::cout << "Alumnos que aprobaron al menos un examen: " << aprobados_almenos_uno << std::endl;
    std::cout << "Alumnos que aprobaron únicamente el último examen: " << aprobados_ultimo << std::endl;


    return 0;
}
