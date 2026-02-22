#include "Persona.cpp"
#include <iostream>

using namespace std;

class Estudiante : Persona {
    private: string carnet;

    public:
        Estudiante() {}
        Estudiante(string car, string cui, string nom, string ape, string dir, int tel, string fn, bool gen) 
            : Persona(cui, nom, ape, dir, tel, fn, gen) {
            carnet = car;
        }

        // Setters y Getters
        void setCarnet(string car) { carnet = car; }
        string getCarnet() { return carnet; }
        
        void leer() {
            cout << "________________" << endl;
            cout << "ESTUDIANTE: " << carnet << ", " << nombres << " " << apellidos << ", CUI: " << cui << endl;
        }
};
