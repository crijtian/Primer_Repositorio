#include "DoubleCell.h"
#include <iostream>

DoubleCell::DoubleCell() {
    num_double = 0;
}

DoubleCell::DoubleCell(const DoubleCell &rhs) {
    num_double = rhs.num_double;
}

DoubleCell::DoubleCell(double _num_double) {
    this -> num_double = _num_double;
}

DoubleCell::~DoubleCell() {

}

//-----------------------------------------------

DoubleCell &DoubleCell::operator=(const DoubleCell &rhs){
    if (this != &rhs) {
        storedValue = rhs.storedValue;
    }
    return *this;
}
DoubleCell &DoubleCell::operator=(double NuevoValor){
    this->storedValue = NuevoValor;
    return *this;
}


DoubleCell &DoubleCell::operator+(const DoubleCell &rhs){
    storedValue = storedValue + rhs.storedValue;
    return *this;
}
DoubleCell &DoubleCell::operator+(double NuevoValor){
    storedValue = storedValue + NuevoValor;
    return *this;
}


DoubleCell &DoubleCell::operator-(const DoubleCell &rhs){
    storedValue = storedValue - rhs.storedValue;
    return *this;
}
DoubleCell &DoubleCell::operator-(double NuevoValor){
    storedValue = storedValue - NuevoValor;
    return *this;
}


DoubleCell &DoubleCell::operator*(const DoubleCell &rhs){
    storedValue = storedValue * rhs.storedValue;
    return *this;
}
DoubleCell &DoubleCell::operator*(double NuevoValor){
    storedValue = storedValue * NuevoValor;
    return *this;
}


DoubleCell &DoubleCell::operator/(const DoubleCell &rhs){
    storedValue = storedValue / rhs.storedValue;
    return *this;
}
DoubleCell &DoubleCell::operator/(double NuevoValor){
    storedValue = storedValue / NuevoValor;
    return *this;
}


DoubleCell DoubleCell::operator%(const DoubleCell &rhs) {
    double result = int(this->storedValue) % int(rhs.storedValue);
    return DoubleCell(result);
}

DoubleCell DoubleCell::operator%(int NuevoValor) {
    double result = int(this->storedValue) % NuevoValor;
    return DoubleCell(result);
}


bool DoubleCell::operator>(const DoubleCell &rhs) {
    if (storedValue > rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool DoubleCell::operator>(double NuevoValor) {
    if (storedValue > NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool DoubleCell::operator<(const DoubleCell &rhs) {
    if (storedValue < rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool DoubleCell::operator<(double NuevoValor) {
    if (storedValue < NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool DoubleCell::operator==(const DoubleCell &rhs) {
    if (storedValue == rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool DoubleCell::operator==(double NuevoValor) {
    if (storedValue == NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool DoubleCell::operator>=(const DoubleCell &rhs) {
    if (storedValue >= rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool DoubleCell::operator>=(double NuevoValor) {
    if (storedValue >= NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool DoubleCell::operator<=(const DoubleCell &rhs) {
    if (storedValue <= rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool DoubleCell::operator<=(double NuevoValor) {
    if (storedValue <= NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool DoubleCell::operator!=(const DoubleCell &rhs) {
    if (storedValue != rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool DoubleCell::operator!=(double NuevoValor) {
    if (storedValue != NuevoValor) {
        return true;
    } else {
        return false;
    }
}

