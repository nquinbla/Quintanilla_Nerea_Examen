// Programa que muestra la informacion de un estudiante y amplia añadiendo

#include <iostream> // bibliotecas
#include <string>
#include <vector>

using namespace std; // para ahorrar tiempo

class Estudiante { // clase estudiante con sus atributos
private: // características privadas
    string nombre;
    int edad;
    string grado;
    vector <string> materias;


public: // características públicas
    void mostrar_info() { //para mostrar la información

    cout << "\nIngresa el nombre del estudiante: "; // se pide la información del nombre
    cin >> nombre;

    cout << "\nIngresa la edad del estudiante: "; // se pide la información de la edad
    cin >> edad;

    cout << "\nIngresa el grado del estudiante: "; // se pide la información del grado
    cin >> grado;

    cout << "\nNombre: " << nombre << endl; // se muestra la información del nombre
    cout << "Edad: " << edad << " anos" << endl; // se muestra la información de la edad
    cout << "Grado: " << grado << endl; // se muestra la información del grado

    }

    void registrar_materia(const string& materia) { // para registrar la materia
        materias.push_back(materia);
    }

    void listar_materias() {
        cout << nombre << " ha registrado las siguientes materias: "; // se muestra la información de las materias
        for (const string& materia : materias) { // se muestran las materias registradas
            cout << materia << ", ";
        }
        cout << endl;
    }

};

int main() {
    Estudiante estudiante; // se crea el objeto estudiante

    cout << "Por favor, proporciona la informacion del estudiante:" << endl; // se pide la información del estudiante
    estudiante.mostrar_info(); // se muestra la información del estudiante

    estudiante.registrar_materia("Programacion"); // se registran las materias
    estudiante.registrar_materia("Informatica");
    estudiante.registrar_materia("Tecnicas de la comunicacion");

    estudiante.listar_materias(); // se muestran las materias registradas


    return 0;
}

