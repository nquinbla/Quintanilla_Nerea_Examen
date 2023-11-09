/* scribe un código en C++ que:
 * Demuestre el uso de una excepción personalizada, por ejemplo, "MateriaYaRegistradaException".
 * Incluye bloques try, catch para manejar dicha excepción
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std; // Para no tener que escribir std::cout, std::cerr, std::endl, etc.

class MateriaYaRegistradaException { // Excepción personalizada
    public :
        MateriaYaRegistradaException(const string& materia) : materia(materia) {}

        string getMateria() const {
            return materia;
        }
    private :
        string materia;

};

class Estudiante { // Clase que registra materias
    public :
        Estudiante(string nombre) : nombre(nombre) {} // Constructor

        void registrar_materia(const string& materia) { // Registra una materia
            for (const string& materiaRegistrada : materias) {
                if (materiaRegistrada == materia) {
                    throw MateriaYaRegistradaException(materia);
                }
            }
            materias.push_back(materia);
        }

        void listar_materias() { // Lista las materias registradas
            cout << nombre << " ha registrado las siguientes materias: ";
            for (const string& materia : materias) {
                cout << materia << ", ";
            }
            cout << endl;
        }

    private :
        string nombre;
        vector<string> materias;
};

int main() { // Función principal
    Estudiante estudiante("Nerea"); // Creamos un estudiante

    try {
        estudiante.registrar_materia("Programacion");
        estudiante.registrar_materia("Ingles");
        estudiante.registrar_materia("Programacion"); // Intentamos registrar la misma materia nuevamente
        estudiante.registrar_materia("Matematicas");

        estudiante.listar_materias(); // Listamos las materias registradas

    } catch (const MateriaYaRegistradaException& ex) { // Manejamos la excepción
        cerr << "Error: La materia '" << ex.getMateria() << "' ya ha sido registrada." << endl; 

    }

    return 0;
}
