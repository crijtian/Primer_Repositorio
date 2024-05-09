#ifndef INC_1_0CONSTRUCTORES_EN_CLASE_FLOATCELL_H
#define INC_1_0CONSTRUCTORES_EN_CLASE_FLOATCELL_H


class FloatCell {
private:
    float num_float;
    float storedValue;

public:
    FloatCell(); //Constructor Implícito
    FloatCell(const FloatCell &rhs); //Constructor explicito por COPIA (&)
    FloatCell(float _num_float); //Constructor explicito por parametro
    ~FloatCell(); //Destructor


    FloatCell &operator=(const FloatCell &rhs);//enseñarle el operador "=", enseñarle cómo tratar la igualdad con números creados a partir de mi clase
    FloatCell &operator=(float NuevoValor);//enseñarle el operador "=", enseñamos cómo tratar la igualdad de números primitivos (cualquier otro número)

    FloatCell &operator+(const FloatCell &rhs);//enseñar sobre el operador "+"
    FloatCell &operator+(float NuevoValor);

    FloatCell &operator-(const FloatCell &rhs);//enseñarle sobre el operador "-"
    FloatCell &operator-(float NuevoValor);

    FloatCell &operator*(const FloatCell &rhs);
    FloatCell &operator*(float NuevoValor);

    FloatCell &operator/(const FloatCell &rhs);
    FloatCell &operator/(float NuevoValor);

    FloatCell operator%(const FloatCell &rhs);
    FloatCell operator%(int NuevoValor);


};


#endif //INC_1_0CONSTRUCTORES_EN_CLASE_FLOATCELL_H
