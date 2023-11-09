// Programa que muestra la informacion de un estudiante

#include <iostream> // bibliotecas
#include <string>
#include "estudiantes.h"

using namespace std; // para ahorrar tiempo

class Estudiante { // clase estudiante con sus atributos
private: // características privadas
    string nombre;
    int edad;
    string grado;


public: // características públicas
    void mostrar_info() { //para mostrar la información

    cout << "Ingresa el nombre del estudiante: "; // se pide la información del nombre
    cin >> nombre;

    cout << "Ingresa la edad del estudiante: "; // se pide la información de la edad
    cin >> edad;

    cout << "Ingresa el grado del estudiante: "; // se pide la información del grado
    cin >> grado;

    cout << "Nombre: " << nombre << endl; // se muestra la información del nombre
    cout << "Edad: " << edad << " anos" << endl; // se muestra la información de la edad
    cout << "Grado: " << grado << endl; // se muestra la información del grado

    }

};

int main() {
    Estudiante estudiante; // se crea el objeto estudiante

    cout << "Por favor, proporciona la informacion del estudiante:" << endl; // se pide la información del estudiante
    estudiante.mostrar_info(); // se muestra la información del estudiante

    return 0;
}

