// Un programa capaz de realizar la suma de dos numeros enteros. Recibe dos numeros enteros y retorna la suma de estos.

#include <iostream>

using namespace std; // Esto es para no tener que escribir std::cout, std::cin, etc. Es decir para ahorrar tiempo.

int main() {
    int a, b; // Declaracion de variables

    cout << "Ingrese el primer numero entero: "; // imprimimos en pantalla el mensaje para que el usuario ingrese el primer numero entero
    cin >> a; // leemos el primer numero entero

    cout << "Ingrese el segundo numero entero: ";  // imprimimos en pantalla el mensaje para que el usuario ingrese el segundo numero entero
    cin >> b; // leemos el segundo numero entero

    int suma(a + b); // Declaracion de variable y asignacion de valor, en este caso la suma de los numeros enteros

    cout << "La suma de los numeros enteros es: " << suma << endl; // sumamos los numeros enteros y los imprimimos en pantalla

    return 0; // Indicamos que el programa termino correctamente
}