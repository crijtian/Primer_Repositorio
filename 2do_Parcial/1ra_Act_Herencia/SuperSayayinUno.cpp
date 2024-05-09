#include "SuperSayayinUno.h"
#include "Persona.h"
#include "KameHameHa.h"
#include "ZenkaiBoost.h"

SuperSayayinUno::SuperSayayinUno(): Persona(), KameHameHa(), ZenkaiBoost(){
    ki = 0;
    strength = 0;
    transformation = " ";
}

SuperSayayinUno::SuperSayayinUno(const SuperSayayinUno &rhs) : Persona(rhs), KameHameHa(rhs), ZenkaiBoost(rhs){
    ki = rhs.ki;
    strength = rhs.strength;
    transformation = rhs.transformation;
}


SuperSayayinUno::SuperSayayinUno(int ki, int strength, std::string transformation,
                                 int age, float height, std::string sex, std::string name, std::string nationality,
                                 int damage, std::string width, std::string scope,
                                 int kiBoost, int damageBoost, int duration)

: Persona(age, height, sex, name, nationality), KameHameHa(damage, width, scope), ZenkaiBoost(kiBoost, damageBoost, duration){
    this -> ki = ki;
    this -> strength = strength;
    this -> transformation = transformation;
}


SuperSayayinUno::~SuperSayayinUno(){

}

int SuperSayayinUno::getKi() const {
    return ki;
}
void SuperSayayinUno::setKi(int newKi) {
    this -> ki = newKi;
}


int SuperSayayinUno::getStrength() const {
    return strength;
}
void SuperSayayinUno::setStrength(int newStrength) {
    this -> strength = newStrength;
}


std::string SuperSayayinUno::getTransformation() const {
    return transformation;
}

void SuperSayayinUno::setTransformation(std::string newTransformation) {
    this -> transformation = newTransformation;
}

