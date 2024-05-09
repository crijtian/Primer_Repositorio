#include "Caballo.h"
#include "Animal.h"

Caballo::Caballo() : Animal(){
    hairColor = " ";
    horsetailColor = " ";
}

Caballo::Caballo(const Caballo &rhs) : Animal(rhs){
    hairColor = rhs.hairColor;
    horsetailColor = rhs.horsetailColor;
}

Caballo::Caballo(std::string hairColor, std::string horsetailColor,
                 std::string sex, float weight, float height, int age)
                 : Animal(sex, weight, height, age){
    this -> hairColor = hairColor;
    this -> horsetailColor = horsetailColor;
}

Caballo::~Caballo(){

}

void Caballo::makeSound() {
std::cout << "El caballo relincha como sonido de animal" << std::endl;
}
