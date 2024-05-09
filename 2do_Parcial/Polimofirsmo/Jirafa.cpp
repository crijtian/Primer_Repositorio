#include "Jirafa.h"
#include "Animal.h"


Jirafa::Jirafa() : Animal() {
    neckHeight = 0;
    legsHeight = 0;
}

Jirafa::Jirafa(const Jirafa &rhs) : Animal(rhs) {
    neckHeight = rhs.neckHeight;
    legsHeight = rhs.legsHeight;
}

Jirafa::Jirafa(float neckHeight, float legsHeight,
               std::string sex, float weight, float height, int age) : Animal (sex, weight, height, age){
    this -> neckHeight = neckHeight;
    this -> legsHeight = legsHeight;
}

Jirafa::~Jirafa() {

}

void Jirafa::makeSound() {
    std::cout << "El jirafa hace un zumbido como sonido de animal :0" << std::endl;
}