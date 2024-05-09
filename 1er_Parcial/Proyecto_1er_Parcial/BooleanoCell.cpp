#include "BooleanoCell.h"
#include <iostream>

BooleanoCell::BooleanoCell(){
valorBooleano = false;
}

BooleanoCell::BooleanoCell(const BooleanoCell &rhs){
    valorBooleano = rhs.valorBooleano;
}

BooleanoCell::BooleanoCell(bool _valorBooleano) {
    this -> valorBooleano = _valorBooleano;
}

BooleanoCell::~BooleanoCell() {

}

//--------------------------------------------------------//

BooleanoCell &BooleanoCell::operator=(const BooleanoCell &rhs){
    if (this != &rhs) {
        storedValue = rhs.storedValue;
    }
    return *this;
}
BooleanoCell &BooleanoCell::operator=(bool NuevoValor){
    this->storedValue = NuevoValor;
    return *this;
}

BooleanoCell &BooleanoCell::operator+(const BooleanoCell &rhs){
    storedValue = storedValue + rhs.storedValue;
    return *this;
}
BooleanoCell &BooleanoCell::operator+(bool NuevoValor){
    storedValue = storedValue + NuevoValor;
    return *this;
}


BooleanoCell &BooleanoCell::operator-(const BooleanoCell &rhs){
    storedValue = storedValue - rhs.storedValue;
    return *this;
}
BooleanoCell &BooleanoCell::operator-(bool NuevoValor){
    storedValue = storedValue - NuevoValor;
    return *this;
}


bool BooleanoCell::operator==(const BooleanoCell &rhs) {
    if (storedValue == rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool BooleanoCell::operator==(bool NuevoValor) {
    if (storedValue == NuevoValor) {
        return true;
    } else {
        return false;
    }
}

bool BooleanoCell::operator!=(const BooleanoCell &rhs) {
    if (storedValue != rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool BooleanoCell::operator!=(bool NuevoValor) {
    if (storedValue != NuevoValor) {
        return true;
    } else {
        return false;
    }
}





