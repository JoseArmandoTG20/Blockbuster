#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    private:
        char nombredir[100];
        char apelladir[100];
        char nacdire[100];

    public:
        Persona();
        Persona(char[],char[],char[]);
        void toString();

};

#endif // PERSONA_H
