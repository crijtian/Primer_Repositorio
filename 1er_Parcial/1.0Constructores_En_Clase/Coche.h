
#ifndef INC_1_0CONSTRUCTORES_EN_CLASE_COCHE_H
#define INC_1_0CONSTRUCTORES_EN_CLASE_COCHE_H
#include <iostream>
#include <string>


class Coche {
private:
    std::string marca;
    std::string modelo;
    int anio;
    int kilometraje;
    std::string duenio;

public:
    Coche();//Constructor IMPLICITO

    Coche(const Coche &rhs);//Constructor explicito por COPIA (&)

    Coche(std::string _marca, std::string _modelo, int _anio, int _kilometraje, std::string _duenio);//Constructor explicito por parametro

    ~Coche();//Destructor

    //Sobrecarga de Operadores (No Sobrecarga de Constructores): Enseñarle a la clase Coche el operador "="
    Coche &operator= (const Coche &rhs);
};




#endif //INC_1_0CONSTRUCTORES_EN_CLASE_COCHE_H
