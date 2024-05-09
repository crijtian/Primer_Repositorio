#include "Entero.h"
#include <iostream>

Entero::Entero(){
num_entero = 0;
}

Entero::Entero(const Entero &rhs){
    num_entero = rhs.num_entero;
}

Entero::Entero(int _num_entero){
    this -> num_entero = _num_entero;
}

Entero::~Entero() {

}

//-----------------------------------------//

Entero &Entero::operator=(const Entero &rhs){
    if (this != &rhs) {
        storedValue = rhs.storedValue;
    }
    return *this;
}
Entero &Entero::operator=(int NuevoValor){
    this->storedValue = NuevoValor;
    return *this;
}


Entero &Entero::operator+(const Entero &rhs){
    storedValue = storedValue + rhs.storedValue;
    return *this;
}
Entero &Entero::operator+(int NuevoValor){
    storedValue = storedValue + NuevoValor;
    return *this;
}


Entero &Entero::operator-(const Entero &rhs){
    storedValue = storedValue - rhs.storedValue;
    return *this;
}
Entero &Entero::operator-(int NuevoValor){
    storedValue = storedValue - NuevoValor;
    return *this;
}


Entero &Entero::operator*(const Entero &rhs) {
    storedValue = storedValue * rhs.storedValue;
    return *this;
}
Entero &Entero::operator*(int NuevoValor){
    storedValue = storedValue * NuevoValor;
    return *this;
}


Entero &Entero::operator/(const Entero &rhs) {
    storedValue = storedValue / rhs.storedValue;
    return *this;
}
Entero &Entero::operator/(int NuevoValor){
    storedValue = storedValue / NuevoValor;
    return *this;
}

Entero Entero::operator%(const Entero &rhs) {
    int result = this->storedValue % rhs.storedValue;
    return Entero(result);
}

Entero Entero::operator%(int NuevoValor) {
    int result = this->storedValue % NuevoValor;
    return Entero(result);
}


bool Entero::operator>(const Entero &rhs) {
    if (storedValue > rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool Entero::operator>(int NuevoValor) {
    if (storedValue > NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool Entero::operator<(const Entero &rhs) {
    if (storedValue < rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool Entero::operator<(int NuevoValor) {
    if (storedValue < NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool Entero::operator==(const Entero &rhs) {
    if (storedValue == rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool Entero::operator==(int NuevoValor) {
    if (storedValue == NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool Entero::operator>=(const Entero &rhs) {
    if (storedValue >= rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool Entero::operator>=(int NuevoValor) {
    if (storedValue >= NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool Entero::operator<=(const Entero &rhs) {
    if (storedValue <= rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool Entero::operator<=(int NuevoValor) {
    if (storedValue <= NuevoValor) {
        return true;
    } else {
        return false;
    }
}


bool Entero::operator!=(const Entero &rhs) {
    if (storedValue != rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool Entero::operator!=(int NuevoValor) {
    if (storedValue != NuevoValor) {
        return true;
    } else {
        return false;
    }
}














