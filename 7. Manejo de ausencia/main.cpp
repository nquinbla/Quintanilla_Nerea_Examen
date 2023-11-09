// Creacion de una clase de asistencia con diferentes campos como la fecha de la clase el estado y la uncion miembro

#include <iostream> // librerias
#include <string>
#include <vector>

using namespace std; // ahorrar tiempo

class RegistroAsistencia { // clase
    public: // metodos publicos
    RegistroAsistencia(string fecha, string estado) : fecha(fecha), estado(estado) {} // constructor

    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << ", Estado de asistencia: " << estado << endl; // metodo para mostrar la asistencia
    }
    private : // metodos privados
    string fecha;
    string estado;

};

int main() { // funcion principal

    RegistroAsistencia asistencia1("09-11-2023", "Tarde"); // caracteristicas de la puntualidad
    RegistroAsistencia asistencia2("10-11-2023", "Falta");
    RegistroAsistencia asistencia3("11-11-2023", "Asistio");


    asistencia1.mostrar_asistencia(); // mostrar asistencia
    asistencia2.mostrar_asistencia();
    asistencia3.mostrar_asistencia();

    return 0;
}
