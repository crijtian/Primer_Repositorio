#include "Coche.h"
#include <iostream>
#include <string>

Coche::Coche(){
    marca = "Unknown";
    modelo = "Unknown";
    anio = 0;
    kilometraje = 0;
    duenio = "Unknown";
}

Coche::Coche(const Coche &rhs){
    marca = rhs.marca;
    modelo = rhs.modelo;
    anio = rhs.anio;
    kilometraje = rhs.kilometraje;
    duenio = rhs.duenio;
}

Coche::Coche(std::string _marca, std::string _modelo, int _anio, int _kilometraje, std::string _duenio) {
    this -> marca = _marca;
    this -> modelo = _modelo;
    this -> anio = _anio;
    this -> kilometraje = _kilometraje;
    this -> duenio = _duenio;
}

//Sobrecarga de Operadores: Enseñarle a la clase Coche el operador "="
Coche &Coche::operator=(const Coche &rhs){//"operator" es una palabra que ya entiende el C++
    this -> marca = rhs.marca;
    this -> modelo = rhs.modelo;
    this -> anio = rhs.anio;
    this -> kilometraje = rhs.kilometraje;
    this -> duenio = rhs.duenio;
}