#include "Persona.h"

Persona::Persona() {
age = 0;
height = 0;
sex = " ";
name = " ";
nationality = " ";

}

Persona::Persona(const Persona &rhs) {
    age = rhs.age;
    height = rhs.height;
    sex = rhs.sex;
    name = rhs.name;
    nationality = rhs. nationality;
}

Persona::Persona(int age, float height, std::string sex, std::string name, std::string nationality){
    this -> age = age;
    this -> height = height;
    this -> sex = sex;
    this -> name = name;
    this -> nationality = nationality;
}

Persona::~Persona(){
    //Destructor
}

//--------------------------------------------------

int Persona::getAge() const{
    return age;
}
void Persona::setAge(int newAge){
    this -> age = newAge;
}


float Persona::getHeight() const { //Getters para obtener o leer los atributos PRIVADOS
    return height;
}
void Persona::setHeight(float newHeight) {// Setters para modificar los atributos PRIVADOS
    this -> height = newHeight;
}

std::string Persona::getSex() const {
    return sex;
}
void Persona::setSex(std::string newSex) {
    this -> sex = newSex;
}

std::string Persona::getName() const {
    return name;
}
void Persona::setName(std::string newName) {
    this -> name = newName;
}

std::string Persona::getNationality() const{
    return nationality;
}
void Persona::setNationality(std::string newNationality){
    this -> nationality = newNationality;
}




