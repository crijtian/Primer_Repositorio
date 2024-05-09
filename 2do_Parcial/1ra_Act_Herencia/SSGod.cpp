#include "SSGod.h"
#include "SSTres.h"
#include "string"

SSGod::SSGod() : SSTres(){
    kiDivine = 0;
    habilityDivine = " ";
    transformationGod = " ";
}

SSGod::SSGod(const SSGod &rhs) : SSTres(rhs){
    kiDivine = rhs.kiDivine;
    habilityDivine = rhs.habilityDivine;
    transformationGod = rhs.transformationGod;
}

SSGod::SSGod(int kiDivine, std::string habilityDivine, std::string transformationGod,
             std::string hairStyle, std::string habilityThree, std::string transformationThree,
             int velocity, std::string habilityTwo,std::string transformationTwo,
             int ki, int strenght, std::string transformation,
             int age, float height, std::string sex, std::string name, std::string nationality)
             : SSTres() {
    this -> kiDivine = kiDivine;
    this -> habilityDivine = habilityDivine;
    this -> transformationGod = transformationGod;
}

SSTres::~SSTres() {

}

int SSGod::getKiDivine() const {
    return kiDivine;
}
void SSGod::setKiDivine(int newKiDivine) {
    this -> kiDivine = newKiDivine;
}

std::string SSGod::getHabilityDivine() const {
    return habilityDivine;
}
void SSGod::setHabilityDivine(std::string newHabilityDivine) {
    this -> habilityDivine = newHabilityDivine;
}

std::string SSGod::getTransformationGod() const {
    return transformationGod;
}
void SSGod::setTransformationGod(std::string newTransformationGod) {
    this -> transformationGod = newTransformationGod;
}
