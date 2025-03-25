#include <stdio.h>

int main()
{

    int var = 123;
    int *pun;
    pun = &var;

    printf("Contenido del puntero:               %d\n", *pun);
    printf("Direccion en mem. apuntada:          %d\n", pun);
    printf("Direccion en mem. de la variable:    %d\n", &var);
    printf("Direccion en mem. del puntero:       %d\n", &pun);
    printf("Tamaño en mem. de la variable \"var\": %d\n", sizeof(var));

    return 0;
}
