// Creamos una clase de un profesor con sus respectivas propiedades y su funcion miembro

#include <iostream> // Biblioteca estandar de C++
#include <string>

using namespace std;

class Profesor { // Clase Profesor
public:
    Profesor(string nombre, int edad, string materia, int experiencia)
            : nombre(nombre), edad(edad), materia(materia), experiencia(experiencia) {}

    void mostrar_info_profesor() { // Funcion miembro
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Materia que imparte: " << materia << endl;
        cout << "Anos de experiencia: " << experiencia << " anos" << endl;
    }

private : // Propiedades
    string nombre;
    int edad;
    string materia;
    int experiencia;
};

int main() { // Funcion principal
Profesor profesor("Ruebn", 46, "Programacion", 17);
profesor.mostrar_info_profesor();


    return 0;
}