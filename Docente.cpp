#include "Persona.cpp"
#include <iostream>
using namespace std;

class Docente : public Persona {
    private: 
        string codigo, nit, profesion;
        float salario;

    public:
        Docente() {}

        // Setters
        void setCodigo(string c) { codigo = c; }
        void setNit(string n) { nit = n; }
        void setSalario(float s) { salario = s; }
        void setProfesion(string p) { profesion = p; }
        void setCui(string c) { cui = c; }
        void setNombres(string nom) { nombres = nom; }
        void setApellidos(string ape) { apellidos = ape; }
        void setDireccion(string dir) { direccion = dir; }
        void setTelefono(int tel) { telefono = tel; }
        void setGenero(bool g) { genero = g; }

        // Getters
        string getCui() { return cui; }
        string getNombres() { return nombres; }
        string getApellidos() { return apellidos; }
        string getDireccion() { return direccion; }
        bool getGenero() { return genero; }

        void leer() {
            cout << "\n________________" << endl;
            cout << "CUI: " << cui << endl;
            cout << "Nombre: " << nombres << " " << apellidos << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Genero: " << (genero ? "Masculino" : "Femenino") << endl;
            cout << "Profesion: " << profesion << " | Salario: " << salario << endl;
        }
};
