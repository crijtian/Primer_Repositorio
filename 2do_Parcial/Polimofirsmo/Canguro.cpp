#include "Canguro.h"
#include "Animal.h"

Canguro::Canguro() : Animal(){
    musculature = " ";
    temperament = " ";
}

Canguro::Canguro(const Canguro &rhs) : Animal(rhs){
    musculature = rhs.musculature;
    temperament = rhs.temperament;
}

Canguro::Canguro(std::string musculature, std::string temperament,
           std::string sex, float weight, float height, int age)
        : Animal(sex, weight, height, age){
    this -> musculature = musculature;
    this -> temperament = temperament;
}

Canguro::~Canguro(){

}

void Canguro::makeSound() {
    std::cout << "El canguro grune como sonido de animal" << std::endl;
}
