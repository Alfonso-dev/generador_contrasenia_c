#ifndef GENERARCONTRASENIA_H
#define GENERARCONTRASENIA_H
#include <stdlib.h>

char *generarContrasenia(int longitud)
{

    static const char character[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    char *contrasenia = (char *)malloc(longitud + 1);

    for (int i = 0; i < longitud; i++)
    {
        int indice = rand() % (sizeof(character) - 1);
        contrasenia[i] = character[indice];
    }
    contrasenia[longitud] = '\0';
    return contrasenia;
}

#endif