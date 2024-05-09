#include "Tiempo.h"
#include <iostream>

Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    this-> horas = _horas;
    this -> minutos = _minutos;
    this -> segundos = _segundos;
}

Tiempo::Tiempo(int _segundos2) {
    this -> horas = _segundos2 / 3600;
    this -> minutos = (_segundos2 - horas*60) / 60; //ESTE MÉTODO ESTÁ INCOMPLETO**** D:
    this -> segundos = (_segundos2 - (horas*60) - (minutos*60) /60);


}

void Tiempo::horario() {
    std::cout << "El horario al dia correspondiente es: "<<horas<<" con "<<minutos<<" minutos y "<<segundos<< " segundos"<<std::endl;
}



