#ifndef POLIMOFIRSMO_TIGRE_H
#define POLIMOFIRSMO_TIGRE_H
#include "Animal.h"

class Tigre : public Animal{
public:
    Tigre();
    Tigre(const Tigre &rhs);
    Tigre(std::string albinoOrnot, float strength,
            std::string sex, float weight, float height, int age);
    ~Tigre();

    void makeSound() override;


    std::string albinoOrnot;
    float strength;
};


#endif //POLIMOFIRSMO_TIGRE_H
