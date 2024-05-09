#ifndef INC_1RA_ACT_HERENCIA_ZENKAIBOOST_H
#define INC_1RA_ACT_HERENCIA_ZENKAIBOOST_H


class ZenkaiBoost {
public:
ZenkaiBoost();
ZenkaiBoost(const ZenkaiBoost &rhs);
ZenkaiBoost(int kiBoost, int damageBoost, int duration);

int getKiBoost() const;
void setKiBoost(int newKiBoost);

int getDamageBoost() const;
void setDamageBoost(int newDamageBoost);

int getDuration() const;
void setDuration(int newDuration);


private:
    int kiBoost;
    int damageBoost;
    int duration;

};


#endif //INC_1RA_ACT_HERENCIA_ZENKAIBOOST_H
