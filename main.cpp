#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void saludar(string nombre);

int main()
{
    // Enteros
    short corto;
    int entero;
    long largo;

    // Decimales
    float decimal;
    double doble;

    // boolean
    bool booleano = false;

    char caracter = 'a';
    string nombre;
    // cout << "¿Cómo te llamas?" << endl;
    // cin >> nombre;
    // saludar(nombre);

    int enteros[] = {1,2,3};
    cout << enteros[10] << endl;

    return EXIT_SUCCESS;
}

void saludar(string nombre)
{
    cout << "Hola " << nombre << endl;
}
