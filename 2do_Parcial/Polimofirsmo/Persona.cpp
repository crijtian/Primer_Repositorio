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


void makeSound(){
    std::cout << "Animal hace sonido :p" << std::endl;
}

