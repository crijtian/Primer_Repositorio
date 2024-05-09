#include "Leon.h"
#include "Animal.h"

Leon::Leon() : Animal() {
    maneSize = " ";
    leadership = " ";
}

Leon::Leon(const Leon &rhs) : Animal(rhs) {
    maneSize = rhs.maneSize;
    leadership = rhs.leadership;
}

Leon::Leon(std::string maneSize, std::string leadership,
           std::string sex, float weight, float height, int age)
        : Animal(sex, weight, height, age){
    this -> maneSize = maneSize;
    this -> leadership = leadership;
}

Leon::~Leon(){

}

void Leon::makeSound() {
    std::cout << "El leon ruge muy fuerte como sonido de animal" << std::endl;
}