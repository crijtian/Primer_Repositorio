#ifndef POLIMOFIRSMO_GUACAMAYO_H
#define POLIMOFIRSMO_GUACAMAYO_H
#include "Animal.h"

class Guacamayo : public Animal{
public:
    Guacamayo();
    Guacamayo(const Guacamayo &rhs);
    Guacamayo(std::string featherColor, float beakSize,
            std::string sex, float weight, float height, int age);
    ~Guacamayo();

    void makeSound() override;


    std::string featherColor;
    float beakSize;
};


#endif //POLIMOFIRSMO_GUACAMAYO_H
