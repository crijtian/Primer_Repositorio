#ifndef PROYECTO_1ER_PARCIAL_BOOLEANOCELL_H
#define PROYECTO_1ER_PARCIAL_BOOLEANOCELL_H


class BooleanoCell {
private:
    bool valorBooleano;
    bool storedValue;

public:
    BooleanoCell();
    BooleanoCell(const BooleanoCell &rhs);
    BooleanoCell(bool _valorBooleano);
    ~BooleanoCell();

    BooleanoCell &operator=(const BooleanoCell &rhs);
    BooleanoCell &operator=(bool NuuevoValor);

    BooleanoCell &operator+(const BooleanoCell &rhs);
    BooleanoCell &operator+(bool NuevoValor);

    BooleanoCell &operator-(const BooleanoCell &rhs);
    BooleanoCell &operator-(bool NuevoValor);

    bool operator==(const BooleanoCell &rhs);
    bool operator==(bool NuevoValor);

    bool operator!=(const BooleanoCell &rhs);
    bool operator!=(bool NuevoValor);


};


#endif //PROYECTO_1ER_PARCIAL_BOOLEANOCELL_H
