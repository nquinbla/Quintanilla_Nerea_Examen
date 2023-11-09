// Programa que utiliza punteros para intercambiar valores de dos variables, en este caso de variables enteras.

#include <iostream> // biblioteca estandar de entrada y salida

using namespace std; // ahorrar tiempo

void intercambiar(int* a, int* b) { // funcion que intercambia los valores de dos variables
    int temp = *a; // variable temporal para guardar el valor de a
    *a = *b; // a toma el valor de b
    *b = temp; // b toma el valor de a
}

int main() { // funcion principal
    int numero1, numero2; // variables para guardar los numeros

    cout << "Ingrese el primer numero: "; // pedir el primer numero
    cin >> numero1; // guardar el primer numero

    cout << "Ingrese el segundo numero: "; // pedir el segundo numero
    cin >> numero2; // guardar el segundo numero

    cout << "Valores originales: numero 1 = " << numero1 << ", numero 2 = " << numero2 << endl; // mostrar los valores originales

    int* ptr1 = &numero1; // puntero a la direccion de memoria de numero1
    int* ptr2 = &numero2; // puntero a la direccion de memoria de numero2

    intercambiar(ptr1, ptr2); // intercambiar los valores de numero1 y numero2

    cout << "Valores intercambiados: numero 1 = " << numero1 << ", numero 2 = " << numero2 << endl; // mostrar los valores intercambiados

    return 0;
}

