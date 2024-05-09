#ifndef POLIMOFIRSMO_ANIMAL_H
#define POLIMOFIRSMO_ANIMAL_H
#include <iostream>

class Animal {
public:
Animal();
Animal(const Animal &rhs);
Animal(std::string sex, float weight, float height, int age);
~Animal();

    //POLIMOFIRSMO
    //Permito que la función "makeSound" puedan usarlos las demás clases con el comando "virtual"
    //"virtual" le permite al padre darle el permiso a los hijos de utilizar algo en específicio, en este caso, esta función.
    virtual void makeSound();


    std::string sex;
    float weight;
    float height;
    int age;

};


#endif //POLIMOFIRSMO_ANIMAL_H
