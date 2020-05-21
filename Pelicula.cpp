#include "Pelicula.h"

#include <iostream>
#include <cstring>

using namespace std;

Pelicula::Pelicula()
{

}

Pelicula::Pelicula(char titulpel[100],int anniopel,char generpel[100],char prodcpel[100],int minutos,Persona direc)
{
    this->direc = direc;
    this->titulpel[100] = titulpel[100];
    this->anniopel = anniopel;
    this->generpel[100] = generpel[100];
    this->prodcpel[100] = prodcpel[100];
    this->minutos = minutos;

    strcpy(this->titulpel,titulpel);
    strcpy(this->generpel,generpel);
    strcpy(this->prodcpel,prodcpel);
}

void Pelicula::toString()
{
    cout << "+----[DATOS PELICULA]----+" << endl;
    cout << "Titulo:" << this->titulpel << endl;
    cout << "Annio:" << this->anniopel << endl;
    cout << "Genero:" << this->generpel << endl;
    cout << "Productora:" << this->prodcpel << endl;
    cout << "Minutos:" << this->minutos << endl;
    direc.toString();
}


void Pelicula::datosDirec()
{
    direc.toString();
}
