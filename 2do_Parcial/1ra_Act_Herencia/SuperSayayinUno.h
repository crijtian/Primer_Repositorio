#ifndef INC_1RA_ACT_HERENCIA_SUPERSAYAYINUNO_H
#define INC_1RA_ACT_HERENCIA_SUPERSAYAYINUNO_H
#include <iostream>
#include "Persona.h"
#include "KameHameHa.h"
#include "ZenkaiBoost.h"
//La clase SuperSayayinUno ES UNA HERENCIA MÚLTIPLE


class SuperSayayinUno: public Persona, public KameHameHa, public ZenkaiBoost{ //":" significa "acceder": la clase ninja que accede a los datos públicos de la clase Persona
public:
    SuperSayayinUno();
    SuperSayayinUno(const SuperSayayinUno &rhs);
    SuperSayayinUno(int ki, int strength, std::string transformation,
                    int age, float height, std::string sex, std::string name, std::string nationality,
                    int damage, std::string width, std::string scope,
                    int kiBoost, int damageBoost, int duration);
    ~SuperSayayinUno();


    int getKi() const;
    void setKi(int newKi);

    int getStrength() const;
    void setStrength(int newStrength);

    std::string getTransformation()  const;
    void setTransformation(std::string newTransformation);



private:
    int ki;
    int strength;
    std::string transformation;
};


#endif //INC_1RA_ACT_HERENCIA_SUPERSAYAYINUNO_H
