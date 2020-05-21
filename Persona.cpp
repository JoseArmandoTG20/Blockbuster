#include "Persona.h"

#include <iostream>
#include <cstring>

using namespace std;

Persona::Persona()
{

}

Persona::Persona(char nombredir[100],char apelladir[100],char nacdire[100])
{
    this->nombredir[100] = nombredir[100];
    this->apelladir[100] = apelladir[100];
    this->nacdire[100] = nacdire[100];

    strcpy(this->nombredir,nombredir);
    strcpy(this->apelladir,apelladir);
    strcpy(this->nacdire,nacdire);
}

void Persona::toString()
{
    cout << "+----[DATOS AUTOR]----+" << endl;
    cout << "Nombre:" << this->nombredir << " " << this->apelladir << endl;
    cout << "Nacionalidad:"  << this->nacdire << endl;
}
