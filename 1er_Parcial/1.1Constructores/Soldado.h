#ifndef INC_1_5CONSTRUCTORES_SOLDADO_H
#define INC_1_5CONSTRUCTORES_SOLDADO_H
#include <iostream>
#include <string>


class Soldado {
    private:
        int lvl;
        int rol;
        std::string equipo;
    public:
        void atacar();
        void posicion();
};




#endif //INC_1_5CONSTRUCTORES_SOLDADO_H
