#ifndef PERSONA_CPP
#define PERSONA_CPP
#include <iostream>
using namespace std;

class Persona {
    protected: 
        string cui, nombres, apellidos, direccion, fecha_nacimiento;
        int telefono;
        bool genero;

    protected:
        Persona() {}
        Persona(string c, string nom, string ape, string dir, int tel, string fn, bool gen) {
            cui = c; nombres = nom; apellidos = ape; direccion = dir;
            telefono = tel; fecha_nacimiento = fn; genero = gen;
        }

        virtual void crear() {}
        virtual void leer() {}
        virtual void actualizar() {}
        virtual void borrar() {}
};
#endif
