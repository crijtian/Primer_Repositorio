#ifndef PROYECTO_1ER_PARCIAL_ENTERO_H
#define PROYECTO_1ER_PARCIAL_ENTERO_H


class Entero {
private:
    int num_entero;
    int storedValue;

public:
    Entero(); //Constructor Implícito
    Entero(const Entero &rhs); //Constructor por Copia
    Entero(int _num_entero); //Constructor por Parámetro
    ~Entero(); //Destructor


    Entero &operator=(const Entero &rhs);
    Entero &operator=(int NuevoValor);

    Entero &operator+(const Entero &rhs);
    Entero &operator+(int NuevoValor);

    Entero &operator-(const Entero &rhs);
    Entero &operator-(int NuevoValor);

    Entero &operator*(const Entero &rhs);
    Entero &operator*(int NuevoValor);

    Entero &operator/(const Entero &rhs);
    Entero &operator/(int NuevoValor);

    Entero operator%(const Entero &rhs);
    Entero operator%(int NuevoValor);

    bool operator>(const Entero &rhs);
    bool operator>(int NuevoValor);

    bool operator<(const Entero &rhs);
    bool operator<(int NuevoValor);

    bool operator==(const Entero &rhs);
    bool operator==(int NuevoValor);

    bool operator>=(const Entero &rhs);
    bool operator>=(int NuevoValor);

    bool operator<=(const Entero &rhs);
    bool operator<=(int NuevoValor);

    bool operator!=(const Entero &rhs);
    bool operator!=(int NuevoValor);


};


#endif //PROYECTO_1ER_PARCIAL_ENTERO_H
