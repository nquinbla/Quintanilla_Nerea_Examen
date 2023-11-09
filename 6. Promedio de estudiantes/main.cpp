// Diseña una función en C++ que:
//Reciba: Una lista/vector de calificaciones (números enteros).
//Retorne: El promedio de las calificaciones.

#include <iostream> // biblioteca estandar
#include <vector>

using namespace std; // ahorrar escritura

int main() { // funcion principal
    vector<int> calificaciones = {2, 5, 7, 10, 8}; // vector de enteros

    cout << "Mis calificaciones:"; // imprimir
    for (int calificacion : calificaciones) { // para cada calificacion en calificaciones
        cout << " " << calificacion;     // imprimir calificacion
    }
    cout << endl;

    int suma = 0; // variable suma
    for (int calificacion : calificaciones) { // para cada calificacion en calificaciones
        suma += calificacion; // suma = suma + calificacion
    }

    double promedio = static_cast<double>(suma) / calificaciones.size(); // promedio = suma / cantidad de calificaciones

    cout << "El promedio de las calificaciones es: " << promedio << endl; // imprimir promedio

    return 0;
}
