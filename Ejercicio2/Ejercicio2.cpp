#include <iostream>

int main()
{
    int elecciónUsuario;
    do{
        std::cout<< "Menú principal:/n: 1-Jugar, 2-Opciones, 3-Salir" << std::endl;
        std::cout<< "Ingrese una opción: "<< std::endl;
        std::cin >> elecciónUsuario;
        if(elecciónUsuario != 1 && elecciónUsuario!= 2 && elecciónUsuario!=3){
            std::cout<< "Escoja una opción válida"<<std::endl;
        }
    }while(elecciónUsuario!=3);
return 0;
}