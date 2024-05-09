#ifndef POLIMOFIRSMO_LEON_H
#define POLIMOFIRSMO_LEON_H
#include "Animal.h"

class Leon : public Animal{
public:
    Leon();
    Leon(const Leon &rhs);
    Leon(std::string maneSize, std::string leadership,
            std::string sex, float weight, float height, int age);
    ~Leon();

    void makeSound() override;


    std::string maneSize;
    std::string leadership;
};


#endif //POLIMOFIRSMO_LEON_H
