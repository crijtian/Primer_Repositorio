#ifndef POLIMOFIRSMO_CABALLO_H
#define POLIMOFIRSMO_CABALLO_H
#include "Animal.h"


class Caballo : public Animal{
public:
Caballo();
Caballo(const Caballo &rhs);
Caballo(std::string hairColor, std::string horsetailColor,
        std::string sex, float weight, float height, int age);
~Caballo();

void makeSound() override;


    std::string hairColor;
    std::string horsetailColor;
};


#endif //POLIMOFIRSMO_CABALLO_H
