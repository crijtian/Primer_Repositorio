#include "Tigre.h"
#include "Animal.h"

Tigre::Tigre() : Animal() {
    albinoOrnot = " ";
    strength = 0;
}

Tigre::Tigre(const Tigre &rhs) : Animal(rhs) {
    albinoOrnot = rhs.albinoOrnot;
    strength = rhs.strength;
}

Tigre::Tigre(std::string albinoOrnot, float strength,
           std::string sex, float weight, float height, int age)
        : Animal(sex, weight, height, age){
    this -> albinoOrnot = albinoOrnot;
    this -> strength = strength;
}

Tigre::~Tigre(){

}

void Tigre::makeSound() {
    std::cout << "El tigre ruge como sonido de animal" << std::endl;
}

