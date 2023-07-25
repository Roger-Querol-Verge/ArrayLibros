// ArrayLibros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string libros[5][2];
    cout << "Please set the information about the books: \n";
    string titulo, autor;


    for (int i = 0; i < 5; i++)
    {
        cout << "\n**** Book " << i + 1 << "****:\n";
        cout << "Title: ";
        getline(cin, titulo);
        cout << "Author: "; 
        getline(cin, autor);
        libros[i][0] = titulo;
        libros[i][1] = autor;
    }

    int filas = (sizeof(libros) / sizeof(libros[0]));
    int columnas = (sizeof(libros[0]) / sizeof(libros[0][0]));

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << libros[i][j] << "\n";
        }
    }
    system("pause");

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
