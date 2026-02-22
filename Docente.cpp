#include "Persona.cpp"
#include <iostream>

using namespace std;


class Docente : public Persona {
    private: 
        string codigo, nit, profesion;
        float salario;

    public:
        Docente() {}
        
        void setCodigo(string c) { codigo = c; }
        void setNit(string n) { nit = n; }
        void setSalario(float s) { salario = s; }
        void setProfesion(string p) { profesion = p; }
       
        void setCui(string c) { cui = c; }
        void setNombres(string nom) { nombres = nom; }
        void setApellidos(string ape) { apellidos = ape; }
        void setDireccion(string dir) { direccion = dir; }
        void setTelefono(int tel) { telefono = tel; }

        void leer() {
            cout << "________________" << endl;
            cout << "Docente: " << nombres << " " << apellidos << endl;
            cout << "Codigo: " << codigo << " | Profesion: " << profesion << " | Salario: " << salario << endl;
        }
};
