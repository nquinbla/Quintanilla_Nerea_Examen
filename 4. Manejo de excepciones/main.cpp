// Programa que demuestra el uso de los bloques try, catch y throw para el manejo de una excepcion. (De una división)

#include <iostream>

using namespace std;

int divide(int x, int y) { // Función que divide dos números enteros
    if (y == 0) { // Si el denominador es cero
        throw "Division por cero no esta permitida"; // Lanzar una excepción
    }
    return x / y; // Devolver el resultado de la división
}

int main() { // Función principal
    int numerador, denominador; // Declarar variables de la división, siendo el numerador y el denominador

    cout << "Ingrese el numerador: "; // Pedir al usuario que ingrese el numerador
    cin >> numerador; // Leer el numerador

    cout << "Ingrese el denominador: "; // Pedir al usuario que ingrese el denominador
    cin >> denominador; // Leer el denominador

    try { // Inicio del bloque try
        int resultado = divide(numerador, denominador); // Llamar a la función divide y guardar el resultado en la variable resultado
        cout << "Resultado de la division: " << resultado << endl; // Imprimir el resultado de la división
    } catch (const char* mensaje) { // Inicio del bloque catch
        cout << "Excepcion atrapada: " << mensaje << endl; // Imprimir el mensaje de la excepción
    }

    cout << "El programa continua despues de la excepcion." << endl; // Imprimir un mensaje

    return 0;
}