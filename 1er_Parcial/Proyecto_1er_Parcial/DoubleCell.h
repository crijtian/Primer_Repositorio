#ifndef PROYECTO_1ER_PARCIAL_DOUBLECELL_H
#define PROYECTO_1ER_PARCIAL_DOUBLECELL_H


class DoubleCell {
private:
    double num_double;
    double storedValue;

public:
    DoubleCell();
    DoubleCell(const DoubleCell &rhs);
    DoubleCell(double _num_double);
    ~DoubleCell();

    DoubleCell &operator=(const DoubleCell &rhs);
    DoubleCell &operator=(double NuevoValor);

    DoubleCell &operator+(const DoubleCell &rhs);
    DoubleCell &operator+(double NuevoValor);

    DoubleCell &operator-(const DoubleCell &rhs);
    DoubleCell &operator-(double NuevoValor);

    DoubleCell &operator*(const DoubleCell &rhs);
    DoubleCell &operator*(double NuevoValor);

    DoubleCell &operator/(const DoubleCell &rhs);
    DoubleCell &operator/(double NuevoValor);

    DoubleCell operator%(const DoubleCell &rhs);
    DoubleCell operator%(int NuevoValor);

    bool operator>(const DoubleCell &rhs);
    bool operator>(double NuevoValor);

    bool operator<(const DoubleCell &rhs);
    bool operator<(double NuevoValor);

    bool operator==(const DoubleCell &rhs);
    bool operator==(double NuevoValor);

    bool operator>=(const DoubleCell &rhs);
    bool operator>=(double NuevoValor);

    bool operator<=(const DoubleCell &rhs);
    bool operator<=(double NuevoValor);

    bool operator!=(const DoubleCell &rhs);
    bool operator!=(double NuevoValor);

};


#endif //PROYECTO_1ER_PARCIAL_DOUBLECELL_H
