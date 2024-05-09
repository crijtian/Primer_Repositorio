#ifndef PROYECTO_1ER_PARCIAL_CHARCELL_H
#define PROYECTO_1ER_PARCIAL_CHARCELL_H


class CharCell {
private:
    char character;
    char storedValue;

public:
    CharCell();
    CharCell(const CharCell &rhs);
    CharCell(char _character);
    ~CharCell();

    CharCell &operator=(const CharCell &rhs);
    CharCell &operator=(char NuevoCharacter);

    CharCell &operator+(const CharCell &rhs);
    CharCell &operator+(char NuevoCharacter);

    bool operator==(const CharCell &rhs);
    bool operator==(char NuevoValor);

    bool operator!=(const CharCell &rhs);
    bool operator!=(char NuevoValor);



};


#endif //PROYECTO_1ER_PARCIAL_CHARCELL_H
