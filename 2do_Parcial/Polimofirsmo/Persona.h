#ifndef INC_1RA_ACT_HERENCIA_PERSONA_H
#define INC_1RA_ACT_HERENCIA_PERSONA_H
#include <iostream>

class Persona {

private:
    int age;
    float height;
    std::string sex;
    std::string name;
    std::string nationality;


public:
    Persona();
    Persona(const Persona &rhs);
    Persona(int age, float height, std::string sex, std::string name, std::string nationality);
    ~Persona();
};


#endif //INC_1RA_ACT_HERENCIA_PERSONA_H
