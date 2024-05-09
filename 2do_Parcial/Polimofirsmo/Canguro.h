#ifndef POLIMOFIRSMO_CANGURO_H
#define POLIMOFIRSMO_CANGURO_H
#include "Animal.h"

class Canguro : public Animal {
public:
    Canguro();
    Canguro(const Canguro &rhs);
    Canguro(std::string musculature, std::string temperament,
            std::string sex, float weight, float height, int age);
    ~Canguro();

    void makeSound() override;


    std::string musculature;
    std::string temperament;
};


#endif //POLIMOFIRSMO_CANGURO_H
