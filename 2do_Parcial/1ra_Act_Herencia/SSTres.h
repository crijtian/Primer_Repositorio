#ifndef INC_1RA_ACT_HERENCIA_SSTRES_H
#define INC_1RA_ACT_HERENCIA_SSTRES_H
#include "SS2.h"





class SSTres : public SS2{
public:
    SSTres();
    SSTres(const SSTres &rhs);
    SSTres(std::string hairStyle, std::string habilityThree, std::string transformationThree,
           int velocity, std::string habilityTwo,std::string transformationTwo,
           int ki, int strength, std::string transformation,
           int age, float height, std::string sex, std::string name, std::string nationality);
    ~SSTres();


    std::string getHairStyle() const;
    void setHairStyle(std::string newHairStyle);

    std::string getHabilityThree() const;
    void setHabilityThree(std::string newHabilityThree);

    std::string getTransformationThree() const;
    void setTransformationThree(std::string newTranformationThree);


private:
    std::string hairStyle;
    std::string habilityThree;
    std::string transformationThree;

};


#endif //INC_1RA_ACT_HERENCIA_SSTRES_H
