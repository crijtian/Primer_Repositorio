#include "Mono.h"
#include "Animal.h"

Mono::Mono() : Animal() {
    personality = " ";
    size = 0;
}

Mono::Mono(const Mono &rhs) : Animal(rhs) {
    personality = rhs.personality;
    size = rhs.size;
}

Mono::Mono(std::string personality, float size,
           std::string sex, float weight, float height, int age)
        : Animal(sex, weight, height, age){
    this -> personality = personality;
    this -> size = size;
}

Mono::~Mono(){

}

void Mono::makeSound() {
    std::cout << "El mono hace chillido como sonido de animal" << std::endl;
}
