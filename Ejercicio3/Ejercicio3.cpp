#include <iostream>
#include <string>

std::string calcularIMC(double estatura, double peso) {
    double resultadoIMC = peso / (estatura * estatura);
    std::string condiciónPeso;

    if (resultadoIMC < 18.5) {
        condiciónPeso = "Usted se encuentra en condición de bajo peso";
    } else if (resultadoIMC >= 18.5 && resultadoIMC <= 24.9) {
        condiciónPeso = "Usted se encuentra en condición de un peso normal";
    } else if (resultadoIMC >= 25.0 && resultadoIMC <= 29.9) {
        condiciónPeso = "Usted se encuentra en condición de sobrepeso";
    } else if (resultadoIMC > 30.0) {
        condiciónPeso = "Usted se encuentra en condición de obesidad";
    }

    return condiciónPeso;
}

int main() {
    double estaturaUsuario;
    double pesoUsuario;

    std::cout << "Ingrese su estatura en metros: ";
    std::cin >> estaturaUsuario;

    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> pesoUsuario;

    std::string resultadoUsuario = calcularIMC(estaturaUsuario, pesoUsuario);
    std::cout << resultadoUsuario << std::endl;

    return 0;
}
