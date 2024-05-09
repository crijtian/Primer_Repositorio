#include "Rectangulo.h"
#include <iostream>



Rectangulo::Rectangulo(float _largo, float _ancho) {
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::perimetro(){
    int perimetro = 2*largo + 2*ancho;
    std::cout << "El perimetro del rectangulo es " << perimetro << std::endl;
};

void Rectangulo::area(){
    int area = largo * ancho;
    std::cout << "El area del rectangulo es " << area << std::endl;

};


