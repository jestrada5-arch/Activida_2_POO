#include "Docente.cpp"
#include <iostream>

using namespace std;

int main() {
    string cui, nom, ape, dir, fn, cod, nit, prof;
    int tel;
    float sal;
    bool gen;

    cout << "--- Registro de Docente ---" << endl;
    cout << "Ingrese Codigo Docente: "; cin >> cod;
    cout << "Ingrese NIT: "; cin >> nit;
    cin.ignore();
    cout << "Ingrese Nombres: "; getline(cin, nom);
    cout << "Ingrese Apellidos: "; getline(cin, ape);
    cout << "Ingrese Salario: "; cin >> sal;
    cin.ignore();
    cout << "Ingrese Profesion: "; getline(cin, prof);
    
    // Instancia usando el estilo que mostraste en tu main.cpp (Constructor vacío + setters)
    Docente d = Docente();
    d.setCodigo(cod);
    d.setNit(nit);
    d.setNombres(nom);
    d.setApellidos(ape);
    d.setSalario(sal);
    d.setProfesion(prof);

    d.leer();

    return 0;
/;
