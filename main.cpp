#include "Docente.cpp"
#include <iostream>

using namespace std;

int main() { 
    string codigo, nit, nombres, apellidos, profesion;
    float salario;
    
    cout << "Ingrese Codigo: ";
    cin >> codigo;
    
    cout << "Ingrese NIT: ";
    cin >> nit;
    
    cin.ignore(); 
    
    cout << "Ingrese Nombres: ";
    getline(cin, nombres); 
    
    cout << "Ingrese Apellidos: ";
    getline(cin, apellidos);
    
    cout << "Ingrese Profesion: ";
    getline(cin, profesion);
    
    cout << "Ingrese Salario: ";
    cin >> salario;
    
    // Instancia y asignacion
    Docente obj = Docente();
    obj.setCodigo(codigo);
    obj.setNit(nit);
    obj.setNombres(nombres);
    obj.setApellidos(apellidos);
    obj.setProfesion(profesion);
    obj.setSalario(salario);
    
    obj.leer();

    return 0; 
} 
