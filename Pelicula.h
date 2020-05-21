#ifndef PELICULA_H
#define PELICULA_H

#include"Persona.h"

class Pelicula
{
    private:
        char titulpel[100];
        int anniopel;
        char generpel[100];
        char prodcpel[100];
        int minutos;
        Persona direc;
    public:
        Pelicula();
        Pelicula(char[],int,char[],char[],int,Persona);
        void toString();
        void datosDirec();

};

#endif // PELICULA_H
