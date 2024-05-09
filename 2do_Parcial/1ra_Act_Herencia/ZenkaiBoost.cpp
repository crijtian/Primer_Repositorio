#include "ZenkaiBoost.h"

ZenkaiBoost::ZenkaiBoost() {
    kiBoost = 0;
    damageBoost = 0;
    duration = 0;
}

ZenkaiBoost::ZenkaiBoost(const ZenkaiBoost &rhs) {
    kiBoost = rhs.kiBoost;
    damageBoost = rhs.damageBoost;
    duration = rhs.duration;
}

ZenkaiBoost::ZenkaiBoost(int kiBoost, int damageBoost, int duration) {
    this -> kiBoost = kiBoost;
    this -> damageBoost = damageBoost;
    this -> duration = duration;
}

int ZenkaiBoost::getKiBoost() const {
    return kiBoost;
}
void ZenkaiBoost::setKiBoost(int newKiBoost) {
    this -> kiBoost = newKiBoost;
}


int ZenkaiBoost::getDamageBoost() const {
    return damageBoost;
}
void ZenkaiBoost::setDamageBoost(int newDamageBoost) {
    this -> damageBoost = newDamageBoost;
}


int ZenkaiBoost::getDuration() const {
    return duration;
}
void ZenkaiBoost::setDuration(int newDuration) {
    this -> duration = newDuration;
}
