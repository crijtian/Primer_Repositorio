//Construir una clase llamada Rectangulo que tenga los siguientes
//atributos: largo y ancho, y los siguientes metodos: perimetro() y area()
#include <iostream>
#include "Rectangulo.h"

int main() {
    Rectangulo rectangulo1(10.3, 5.7);
    Rectangulo rectangulo2(100,50);
    Rectangulo rectangulo3(77, 32);

    rectangulo1.perimetro();

    rectangulo2.area();

    rectangulo3.area();
    rectangulo3.perimetro();
    return 0;
}
