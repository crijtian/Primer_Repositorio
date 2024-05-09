#ifndef INC_1RA_ACT_HERENCIA_KAMEHAMEHA_H
#define INC_1RA_ACT_HERENCIA_KAMEHAMEHA_H
#include <iostream>

class KameHameHa {
public:
KameHameHa();
KameHameHa(const KameHameHa &rhs);
KameHameHa(int damage, std::string width, std::string scope);
~KameHameHa();


int getDamage() const;
void setDamage(int newDamage);

std::string getWidth() const;
void setWidth(std::string newWidth);

std::string getScope() const;
void setScope(std::string newScope);

private:
    int damage;
    std::string width;
    std::string scope;


};


#endif //INC_1RA_ACT_HERENCIA_KAMEHAMEHA_H
