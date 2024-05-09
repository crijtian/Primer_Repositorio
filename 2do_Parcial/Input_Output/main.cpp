#include <iostream>
#include <fstream>
#include <string>//Esto funciona para "activar" std::string y std::getline

struct Login{
    std::string user;
    std::string password;
    std::string email;
};

//Función de tipo bool para verificar si el coreeo que se ingresa tiene su debido "@" y "."
//Esto es una función que ya existe en el C++.
bool validedEmail(const std::string &email){
    return email.find("@") != std::string::npos && email.find(".") != std::string::npos;
}

int main() {

   Login ingreso; //Creo una variable de tipo "Login", que hice arriba, en mi función llamado "Login"
   std::cout << "¡Que tal!, te doy la bienvenida. "
                "Para empezar, ingresa tu usuario, contrasena y correo electronico: " << std::endl;
   std::cin >> ingreso.user >> ingreso.password >> ingreso.email; //En mi variable "ingreso", voy a guardar, dentro de él, la variable "user" de la función Login.


   std::ofstream usuario("BD.txt");//Hago un nuevo documento
   if(!usuario.is_open()){//"is_open" verificar si un archivo abrió, el "!" antes de "usuario" hace contrario al operador "open",
                      //lo que signica que, "!" hace negativo al "open" de "is_open", es decir, sería "is_close".
       std::cerr << "No abrió" << std::endl;//"cerr" indica al programa que termine toda la ejecución del código. STOP!
   }

   usuario << ingreso.user << ", " << ingreso.password << ", " << ingreso.email << "\r\n";
   usuario.close();


   //A PARTIR DE AQUÍ, LO QUE SIGUE DESPUÉS, ES LA LECTURA DE ARCHIVOS. LO QUE ESTÁ ANTES DE ESTO ES LA ESCRITURA DE ARCHIVOS


    std::ifstream lecturaDeUsuario("BD.txt");
    if(!lecturaDeUsuario.is_open()){
        std::cerr << "No se pudo leer este archivo, mi brou" << std::endl;
    }

    std::string linea;
    while (getline(lecturaDeUsuario, linea)) {
        std::cout << linea << '\n';
    }
    usuario.close();
    return 0;
}
