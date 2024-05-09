#ifndef POLIMOFIRSMO_MONO_H
#define POLIMOFIRSMO_MONO_H
#include "Animal.h"


class Mono : public Animal {
public:
Mono();
Mono(const Mono &rhs);
Mono(std::string personality, float size,
     std::string sex, float weight, float height, int age);
~Mono();

void makeSound() override;


    std::string personality;
    float size;

};


#endif //POLIMOFIRSMO_MONO_H
