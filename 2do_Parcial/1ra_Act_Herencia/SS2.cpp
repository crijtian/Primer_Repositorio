#include "SS2.h"
#include "SuperSayayinUno.h"

SS2::SS2() : SuperSayayinUno() {
    velocity = 0;
    habilityTwo = " ";
    transformationTwo = " ";
}

SS2::SS2(const SS2 &rhs) : SuperSayayinUno(rhs){
    velocity = rhs.velocity;
    habilityTwo = rhs.habilityTwo;
    transformationTwo = rhs.transformationTwo;
}

SS2::SS2(int velocity, std::string habilityTwo,std::string transformationTwo,
               int ki, int strength, std::string transformation,
               int age, float height, std::string sex, std::string name, std::string nationality)
        : SuperSayayinUno(){
    this -> velocity = velocity;
    this -> habilityTwo = habilityTwo;
    this -> transformationTwo = transformationTwo;

}

SS2::~SS2(){

}

int SS2::getVelocity() const {
    return velocity;
}
void SS2::setVelocity(int newVelocity) {
    this -> velocity = newVelocity;
}


std::string SS2::getHabilityTwo() const{
    return habilityTwo;
};
void SS2::setHabilityTwo(std::string newHabilityTwo) {
    this -> habilityTwo = newHabilityTwo;
}


std::string SS2::getTransformationTwo() const {
    return transformationTwo;
}
void SS2::setTransformationTwo(std::string newTransformation) {
    this -> transformationTwo = newTransformation;
}