#include <iostream>

double calcularImpuesto (double precio, double tasa){
    return (precio * tasa);
}
double calcularTotal (double precio,  double valorImpuesto){
    return precio + valorImpuesto;
}

int main(){
    std::cout<<"Ingrese el precio del artículo: "<< std::endl;
    double precioArtículo;
    double tasaArtículo;
    std::cin>>precioArtículo;
    std::cout<<"Ingrese la tasa de impuestos del artículo: "<< std::endl;
    std::cin>>tasaArtículo;
    double impuestoArtículo =calcularImpuesto(precioArtículo, tasaArtículo);
    double precioFinalArtículo = calcularTotal(precioArtículo, impuestoArtículo);
    std::cout<<"Precio Inicial: "<<precioArtículo<< std::endl;
    std::cout<<"Tasa de impuestos: "<<tasaArtículo<< std::endl;
    std::cout<<"El precio final es de : "<<precioFinalArtículo<< std::endl;
    return 0;

}