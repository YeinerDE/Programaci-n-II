#include <iostream>

int main() {
    int tamañoPatrón;
    std::cout << "Ingrese el número que desee para el tamaño del patrón: ";
    std::cin >> tamañoPatrón;

    for (int i = 0; i < tamañoPatrón; i++) { 
        for (int j = 0; j < tamañoPatrón; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
