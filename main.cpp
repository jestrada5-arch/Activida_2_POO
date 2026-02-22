#include "Docente.cpp"
#include "Estudiante.cpp"
#include <iostream>

using namespace std;

int main() {
    int opcion, gen_int, tel;
    string nom, ape, dir, cui, carnet;
    bool genero;

    cout << "Elija el tipo de registro (1. Docente / 2. Estudiante): ";
    cin >> opcion;
    cin.ignore(); 

 
    cout << "Ingrese CUI: "; getline(cin, cui);
    cout << "Ingrese Nombres: "; getline(cin, nom);
    cout << "Ingrese Apellidos: "; getline(cin, ape);
    cout << "Ingrese Direccion: "; getline(cin, dir);
    
    cout << "Ingrese Telefono: "; cin >> tel;
    cout << "Ingrese Genero (1:Masc / 0:Fem): "; cin >> gen_int;
    genero = (gen_int == 1);
    cin.ignore(); 

    if (opcion == 1) {
       
    } 
    else if (opcion == 2) {
        cout << "Ingrese Carnet: "; cin >> carnet;
        
        Estudiante e = Estudiante();
        e.setCarnet(carnet);
        e.setCui(cui);
        e.setNombres(nom);
        e.setApellidos(ape);
        e.setDireccion(dir); 
        e.setTelefono(tel);
        e.setGenero(genero);
        
        e.leer();
    }

    return 0;
}
