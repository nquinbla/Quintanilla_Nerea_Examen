// Programa que reciba una lista  vector de estudiantes y grados especificos y retorne con una lsta de estudiantes con ese grado ingresado

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estudiante { // Clase estudiante
    public : // Metodos publicos de la clase
        Estudiante(string nombre, int grado) : nombre(nombre), grado(grado) {} // Constructor de la clase
        string obtenerNombre() const { // Funcion que retorna el nombre
            return nombre;
        }
        int obtenerGrado() const { // Funcion que retorna el grado
            return grado;
        }

    private : // Metodos privados de la clase
        string nombre;
        int grado;
};

int main() { // Funcion principal
    vector<Estudiante> estudiantes; // Vector de estudiantes

    estudiantes.push_back(Estudiante("Nerea", 1)); // Agregamos estudiantes al vector
    estudiantes.push_back(Estudiante("Ruben", 4));
    estudiantes.push_back(Estudiante("Cintia", 2));
    estudiantes.push_back(Estudiante("Zoe", 3));
    estudiantes.push_back(Estudiante("Adriana", 2));
    estudiantes.push_back(Estudiante("Ruben el mejor", 1));
    estudiantes.push_back(Estudiante("Robe", 2));

    cout << "Grados disponibles:\n"; // Mostramos los grados disponibles
    for (const Estudiante& estudiante : estudiantes) { // Recorremos el vector de estudiantes
        cout << estudiante.obtenerNombre() << " - Grado " << estudiante.obtenerGrado() << endl; // Mostramos el nombre y el grado de cada estudiante
    }

    int gradoBuscado; // Variable para guardar el grado buscado

    cout << "Elija un grado para filtrar: "; // Pedimos el grado a filtrar
    cin >> gradoBuscado; // Guardamos el grado en la variable

    cout << "Estudiantes del grado " << gradoBuscado << ": \n"; // Mostramos los estudiantes del grado buscado
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.obtenerGrado() == gradoBuscado) {
            cout << estudiante.obtenerNombre() << endl;
        }
    }

    return 0;
}