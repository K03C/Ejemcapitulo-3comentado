#include <stdio.h>// Libreria a utilizar

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
➥de los lanzamientos de la atleta cubana.
I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

void main(void)// funcion principaL
{
    int I, N;    // declaracion de la variable "I y N" como entera.

    float LAN, SLA = 0;//declaracion de la variable "SAL y NOM" como flotante.
    do
    {
        printf("Ingrese el número de lanzamientos:\t");//Se imprime por consola el mensaje
        scanf("%d", &N);
    } while (N < 1 || N > 11);
    /* Se utiliza la estructura do-while para verificar que el valor de N sea
    ➥correcto. */
    for (I = 1; I <= N; I++)    // creacion de bucle, mientras la variable "I" sea menor o igual a "N" se matendra el bucle
    {
        printf("\nIngrese el lanzamiento %d: ", I);//Se imprime por consola el mensaje

        scanf("%f", &LAN); //se lee dato ingrasado por pantalla y almacenado den la variable "LAN"
        SLA = SLA + LAN; // Se igualara la variable "SLA" a la suma de "SLA" y "LAN"
    }
    SLA = SLA / N;
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);//Se imprime en consola el mensaje y el valor de la variable "SLA"
}
