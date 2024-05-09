#include "FloatCell.h"
#include <iostream>

FloatCell::FloatCell(){
    num_float = 0;
}


//Constructor explicito por COPIA (&)
FloatCell::FloatCell(const FloatCell &rhs){
    num_float = rhs.num_float;

}



FloatCell::FloatCell(float _num_float){
    this -> num_float = _num_float;
}

//-------------------------------------//
FloatCell &FloatCell::operator=(const FloatCell &rhs){
    if (this != &rhs) {
        storedValue = rhs.storedValue;
    }
    return *this;
}
FloatCell &FloatCell::operator=(float NuevoValor){
    this->storedValue = NuevoValor;
    return *this;
}


FloatCell &FloatCell::operator+(const FloatCell &rhs){
    storedValue = storedValue + rhs.storedValue;
    return *this;
}
FloatCell &FloatCell::operator+(float NuevoValor){
    storedValue = storedValue + NuevoValor;
    return *this;
}


FloatCell &FloatCell::operator-(const FloatCell &rhs){
    storedValue = storedValue - rhs.storedValue;
    return *this;
}
FloatCell &FloatCell::operator-(float NuevoValor){
    storedValue = storedValue - NuevoValor;
    return *this;
}


FloatCell &FloatCell::operator*(const FloatCell &rhs){
    storedValue = storedValue * rhs.storedValue;
}
FloatCell &FloatCell::operator*(const float NuevoValor){
    storedValue = storedValue * NuevoValor;
    return *this;
}


FloatCell &FloatCell::operator/(const FloatCell &rhs){
    storedValue = storedValue / rhs.storedValue;
}
FloatCell &FloatCell::operator/(const float NuevoValor){
    storedValue = storedValue / NuevoValor;
    return *this;
}

FloatCell FloatCell::operator%(const FloatCell &rhs) {
    float result = int(this->storedValue) % int(rhs.storedValue);
    return FloatCell(result);
}

FloatCell FloatCell::operator%(int NuevoValor) {
    float result = int(this->storedValue) % NuevoValor;
    return FloatCell(result);
}





