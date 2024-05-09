#include "Guacamayo.h"
#include "Animal.h"

Guacamayo::Guacamayo() : Animal() {
    featherColor = " ";
    beakSize = 0;
}

Guacamayo::Guacamayo(const Guacamayo &rhs) : Animal(rhs){
    featherColor = rhs.featherColor;
    featherColor = rhs.featherColor;
}

Guacamayo::Guacamayo(std::string featherColor, float beakSize,
           std::string sex, float weight, float height, int age)
        : Animal(sex, weight, height, age){
    this -> featherColor = featherColor;
    this -> beakSize = beakSize;
}

Guacamayo::~Guacamayo(){

}

void Guacamayo::makeSound() {
    std::cout << "El guacamayo grita como sonido de animal" << std::endl;
}