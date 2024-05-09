#ifndef POLIMOFIRSMO_JIRAFA_H
#define POLIMOFIRSMO_JIRAFA_H
#include "Animal.h"

class Jirafa : public Animal{
public:
    Jirafa();
    Jirafa(const Jirafa &rhs);
    Jirafa(float neckHeight, float legsHeight,
           std::string sex, float weight, float height, int age);
    ~Jirafa();

    //Los hijos, son los que tendrán el comando "override" y no "virtual".
    //"override" significa
    void makeSound() override;


    float neckHeight;
    float legsHeight;


};


#endif //POLIMOFIRSMO_JIRAFA_H
