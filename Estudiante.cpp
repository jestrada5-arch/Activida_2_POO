#include "Persona.cpp"
#include <iostream>
using namespace std;

class Estudiante : public Persona {
    private: 
        string carnet;

    public:
        Estudiante() {}

        // Setters
        void setCarnet(string car) { carnet = car; }
        void setCui(string c) { cui = c; }
        void setNombres(string nom) { nombres = nom; }
        void setApellidos(string ape) { apellidos = ape; }
        void setDireccion(string dir) { direccion = dir; } // Agregado
        void setTelefono(int tel) { telefono = tel; }
        void setGenero(bool g) { genero = g; }

        // Getters
        string getCarnet() { return carnet; }
        string getNombres() { return nombres; }
        string getDireccion() { return direccion; } // Agregado

        void leer() {
            cout << "\n________________" << endl;
            cout << "Carnet: " << carnet << endl;
            cout << "Estudiante: " << nombres << " " << apellidos << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "CUI: " << cui << " | Genero: " << (genero ? "Masculino" : "Femenino") << endl;
        }
};
