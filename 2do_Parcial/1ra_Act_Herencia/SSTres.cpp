#include "SSTres.h"
#include "SS2.h"

SSTres::SSTres() : SS2(){
    hairStyle = " ";
    habilityThree = " ";
    transformationThree = " ";
}

SSTres::SSTres(const SSTres &rhs) : SS2(rhs){
    hairStyle = rhs.hairStyle;
    habilityThree = rhs.habilityThree;
    transformationThree = rhs.transformationThree;
}

SSTres::SSTres(std::string hairStyle, std::string habilityThree, std::string transformationThree,
               int velocity, std::string habilityTwo,std::string transformationTwo,
               int ki, int strength, std::string transformation,
               int age, float height, std::string sex, std::string name, std::string nationality)
               : SS2(velocity, habilityTwo, transformationTwo, ki, strength, transformation, age, height, sex, name, nationality){
    this -> hairStyle = hairStyle;
    this -> habilityThree = habilityThree;
    this -> transformationThree = transformationThree;

}

SSTres::~SSTres(){

}

std::string SSTres::getHairStyle() const{
    return hairStyle;
}
void SSTres::setHairStyle(std::string newHairStyle) {
    this -> hairStyle = newHairStyle;
}


std::string SSTres::getHabilityThree() const {
    return habilityThree;
}
void SSTres::setHabilityThree(std::string newHabilityThree) {
    this -> habilityThree = newHabilityThree;
}


std::string SSTres::getTransformationThree() const{
    return transformationThree;
}

void SSTres::setTransformationThree(std::string newTranformationThree) {
    this -> transformationThree = newTranformationThree;
}





