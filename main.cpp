#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>

#include "Pelicula.h"
#include "Persona.h"
using namespace std;

Pelicula registrarpeli()
{
    char titulpel[100];
    int anniopel;
    char generpel[100];
    char prodcpel[100];
    int minutos;

    char nombredir[100];
    char apelladir[100];
    char nacdire[100];

    cout << "+-----[DATOS DE LA PELICULA]-----+" << endl;
    cout << "Titulo: ";
    cin >> titulpel;
    cout << "Annio: ";
    cin >> anniopel;
    cout << "Genero: ";
    cin >> generpel;
    cout << "Productora: ";
    cin >> prodcpel;
    cout << "Minutos: ";
    cin >> minutos;

    cout << "+-----[DATOS DEL DIRECTOR]-----+" << endl;
    cout << "Nombre: ";
    cin >> nombredir;
    cout << "Apellido: ";
    cin >> apelladir;
    cout << "Nacionalidad: ";
    cin >> nacdire;

    Persona direc = Persona(nombredir,nacdire,apelladir);
    Pelicula regis = Pelicula(titulpel,anniopel,generpel,prodcpel,minutos,direc);
    return regis;

}


void listaPelicula(Pelicula pelis[10], int conpel)
{
    for(int p = 0; p < conpel; p++)
    {
        cout << "+-----[PELICULA " << p << "]-----+" << endl;
        pelis[p].toString();
        cout << "+--------------------------------+" << endl;
    }
}

int main()
{
    int conpel = 0;
    int opc = 0;
    int pc = 0;
    bool sistema = true;

    Pelicula pelis[10];

    while(sistema == true)
    {
        cout << "+-----[MENU PRINCIPAL]-----+" << endl;
        cout << "|  1.-Registrar.           |" << endl;
        cout << "|  2.-Editar.              |" << endl;
        cout << "|  3.-Eliminar.            |" << endl;
        cout << "|  4.-Consultar Director.  |" << endl;
        cout << "+--------------------------+" << endl;
        cout << "Opcion:";
        cin >> opc;

        switch(opc)
        {
            case 1:
                pelis[conpel] = registrarpeli();
                cout << "Numero de Pelicula:" << conpel << endl;
                conpel ++;
            break;

            case 2:
                cout << "+-----[EDITAR DATOS]-----+" << endl;
                listaPelicula(pelis,conpel);

                cout << "Ingresa la Pelicula a Editar:";
                cin >> conpel;

                pelis[conpel] = registrarpeli();
            break;

            case 3:
                listaPelicula(pelis,conpel);

                cout << "Que Pelicula desea eliminar?:";
                cin >> conpel;

                pelis[conpel] = Pelicula();

                cout << "+-----[PELICULA ELIMINADA]-----+" << endl;
            break;

            case 4:
                cout << "+-----[CONSULTAR DIRECTOR]-----+" << endl;
                listaPelicula(pelis,conpel);

                cout << "Que director te gustaria conocer:";
                cin >> conpel;

                pelis[conpel].datosDirec();
            break;

            default:
                sistema = false;
            break;
        }
    }
    return 0;
}
