#include "CharCell.h"

CharCell::CharCell() {
    character = ' ';
}

CharCell::CharCell(const CharCell &rhs) {
    character = rhs.character;
}

CharCell::CharCell(char _character) {
    this->character = _character;
}

CharCell::~CharCell() {

}

//---------------------------------------

CharCell &CharCell::operator=(const CharCell &rhs){
    if (this != &rhs) {
        storedValue = rhs.storedValue;
    }
    return *this;
}
CharCell &CharCell::operator=(char NuevoCharacter){
    this->storedValue = NuevoCharacter;
    return *this;
}

CharCell &CharCell::operator+(const CharCell &rhs) {
    storedValue = storedValue + rhs.storedValue;
    return *this;
}
CharCell &CharCell::operator+(char NuevoCharacter){
    storedValue = storedValue + NuevoCharacter;
    return *this;
}


bool CharCell::operator==(const CharCell &rhs) {
    if (storedValue == rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool CharCell::operator==(char NuevoValor) {
    if (storedValue == NuevoValor) {
        return true;
    } else {
        return false;
    }
}

bool CharCell::operator!=(const CharCell &rhs) {
    if (storedValue != rhs.storedValue) {
        return true;
    } else {
        return false;
    }
}
bool CharCell::operator!=(char NuevoValor) {
    if (storedValue != NuevoValor) {
        return true;
    } else {
        return false;
    }
}

