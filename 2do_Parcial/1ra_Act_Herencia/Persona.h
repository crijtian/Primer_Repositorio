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


    int getAge() const;
    void setAge(int newAge);

    float getHeight() const;
    void setHeight(float newHeight);

    std::string getSex() const;
    void setSex(std::string newSex);

    std::string getName() const;
    void setName(std::string newName);

    std::string getNationality() const;
    void setNationality(std::string newNationality);

};


#endif //INC_1RA_ACT_HERENCIA_PERSONA_H
