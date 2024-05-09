#ifndef INC_1RA_ACT_HERENCIA_SSGOD_H
#define INC_1RA_ACT_HERENCIA_SSGOD_H
#include "SSTres.h"


class SSGod  : public SSTres{

public:
    SSGod();
    SSGod(const SSGod &rhs);
    SSGod(int kiDivine, std::string habilityDivine, std::string transformationGod,
          std::string hairStyle, std::string habilityThree, std::string transformationThree,
          int velocity, std::string habilityTwo,std::string transformationTwo,
          int ki, int strenght, std::string transformation,
          int age, float height, std::string sex, std::string name, std::string nationality);
    ~SSGod();


    int getKiDivine() const;
    void setKiDivine(int newKiDivine);

    std::string getHabilityDivine() const;
    void setHabilityDivine(std::string newHabilityDivine);

    std::string getTransformationGod() const;
    void setTransformationGod(std::string newTransformationGod);

private:
    int kiDivine;
    std::string habilityDivine;
    std::string transformationGod;
};


#endif //INC_1RA_ACT_HERENCIA_SSGOD_H
