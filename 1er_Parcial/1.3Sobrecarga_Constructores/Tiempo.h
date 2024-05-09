
#ifndef INC_1_3SOBRECARGA_CONSTRUCTORES_TIEMPO_H
#define INC_1_3SOBRECARGA_CONSTRUCTORES_TIEMPO_H


class Tiempo {
private:
    int horas, minutos, segundos;

public:
    Tiempo(int _horas, int _minutos, int _segundos);
    Tiempo(int _segundos2);
    void horario();
};



#endif //INC_1_3SOBRECARGA_CONSTRUCTORES_TIEMPO_H
