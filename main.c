#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciongenerar.h"

int main()
{
    srand(time(NULL));
    int longitud = 12;
    char *contrasenia = generarContrasenia(longitud);
    printf("Contraseña generada: %s\n", contrasenia);

    free(contrasenia); 
    return 0;
}