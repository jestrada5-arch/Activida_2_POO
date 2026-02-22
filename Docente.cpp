#include "Persona.cpp"
#include <iostream>

using namespace std;

class Docente : Persona {
    // Atributos privados (- en el diagrama)
    private: 
        string codigo, nit, profesion;
        float salario;

    public:
        // Constructores
        Docente() {}
        Docente(string c, string n, float s, string p, string cui, string nom, string ape, string dir, int tel, string fn, bool gen) 
            : Persona(cui, nom, ape, dir, tel, fn, gen) {
            codigo = c;
            nit = n;
            salario = s;
            profesion = p;
        }

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
        void setFechaNacimiento(string fn) { fecha_nacimiento = fn; }
        void setGenero(bool g) { genero = g; }

        // Getters
        string getCodigo() { return codigo; }
        string getNit() { return nit; }
        float getSalario() { return salario; }
        string getProfesion() { return profesion; }

        // Método leer solicitado
        void leer() {
            cout << "________________" << endl;
            cout << "DOCENTE: " << codigo << ", " << nit << ", " << nombres << " " << apellidos << ", " << profesion << ", Q" << salario << endl;
        }
};
