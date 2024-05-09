#ifndef INC_1RA_ACT_HERENCIA_SS2_H
#define INC_1RA_ACT_HERENCIA_SS2_H
#include "SuperSayayinUno.h"


class SS2: public SuperSayayinUno{
public:
    SS2();
    SS2(const SS2 &rhs);
    SS2(int velocity, std::string habilityTwo,std::string transformationTwo,
    int ki, int strength, std::string transformation,
    int age, float height, std::string sex, std::string name, std::string nationality);
    ~SS2();

    int getVelocity() const;
    void setVelocity(int newVelocity);

    std::string getHabilityTwo() const;
    void setHabilityTwo(std::string newHabilityTwo);

    std::string getTransformationTwo() const;
    void setTransformationTwo(std::string newTransformation);



private:

    int velocity;
    std::string habilityTwo;
    std::string transformationTwo;
};



#endif //INC_1RA_ACT_HERENCIA_SS2_H
