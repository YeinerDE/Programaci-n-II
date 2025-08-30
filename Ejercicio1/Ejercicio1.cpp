#include <iostream>
int main() {
    int numeroUsuario = 0;
    int sumaPares = 0;

    std::cout << "Ingrese los números enteros que desee; digite 0 para terminar: " << std::endl;
    do {//El do-while permite que por lo menos se ejecute y lea al usuario una vez y que itere a partir de ahí.
        std::cin >> numeroUsuario;
        if (numeroUsuario % 2 == 0 && numeroUsuario != 0) {
            sumaPares += numeroUsuario;
        }

    } while (numeroUsuario != 0);

    std:: cout << "La suma de los números pares introducidos es: " << sumaPares << std::endl;
    return 0;
}
