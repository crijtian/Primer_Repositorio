#include "KameHameHa.h"

KameHameHa::KameHameHa() {
damage = 0;
width = " ";
scope = " ";
}

KameHameHa::KameHameHa(const KameHameHa &rhs) {
    damage = rhs.damage;
    width = rhs.width;
    scope = rhs.scope;
}

KameHameHa::KameHameHa(int damage, std::string width, std::string scope) {
    this -> damage = damage;
    this -> width = width;
    this -> scope = scope;
}

KameHameHa::~KameHameHa(){

}


//---------------------------------------

int KameHameHa::getDamage() const {
    return damage;
}
void KameHameHa::setDamage(int newDamage) {
    this -> damage = newDamage;
}


std::string KameHameHa::getWidth() const {
    return width;
}
void KameHameHa::setWidth(std::string newWidth) {
    this -> width = newWidth;
}


std::string KameHameHa::getScope() const {
    return scope;
}
void KameHameHa::setScope(std::string newScope) {
    this -> scope = newScope;
}