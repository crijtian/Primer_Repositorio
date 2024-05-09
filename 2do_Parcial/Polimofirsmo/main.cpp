#include <iostream>
#include "Animal.h"
#include "Caballo.h"
#include "Canguro.h"
#include "Guacamayo.h"
#include "Jirafa.h"
#include "Leon.h"
#include "Mono.h"
#include "Tigre.h"

int main() {
    //CREAR UN OBJETO UTILIZANDO PUNTEROS
    Animal *animal = new Caballo();
    animal->makeSound();
    delete animal;

    //CREAR UN OBJETO DE MANERA TRADICIONAL
    Caballo hola;
    hola.makeSound();

    Animal *animal1 = new Canguro();
    animal1->makeSound();

    Animal *animal3 = new Guacamayo();
    animal3->makeSound();

    Animal *animal4 = new Jirafa();
    animal4->makeSound();

    Animal *animal5 = new Leon();
    animal5->makeSound();

    Animal *animal6 = new Mono();
    animal6->makeSound();

    Animal *animal7 = new Tigre();
    animal7->makeSound();


    return 0;

}
