#include "Animal.h"

Animal::Animal() {
sex = " ";
weight = 0;
height = 0;
age = 0;
}

Animal::Animal(const Animal &rhs) {
    sex = rhs.sex;
    weight = rhs.weight;
    height = rhs.height;
    age = rhs.age;
}

Animal::Animal(std::string sex, float weight, float height, int age) {
this -> sex = sex;
this -> weight = weight;
this -> height = height;
this -> age = age;
}

Animal::~Animal() {

}

void Animal::makeSound(){
    std::cout << "Animal hace sonido :p" << std::endl;
}