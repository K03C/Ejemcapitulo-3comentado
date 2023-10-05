#include <stdio.h> // Libreria a utilizar
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, obtiene la suma de los
➥números pares y calcula el promedio de los impares.
I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */
void main(void) // funcion principaL
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;// declaracion de la variable "I, N, NUM, SPA, SIM y CIM" como entera.

    printf("Ingrese el número de datos que se van a procesar:\t");//Se imprime por consola el mensaje

    scanf("%d", &N);//se lee dato ingrasado por pantalla y almacenado den la variable "SAL"

    if (N > 0) //Condicionante, mientras la variable "N" sea mayor a 0
    {
        for (I = 1; I <= N; I++)// creacion de bucle, mientras la variable "I" sea menor o igual a "N" se matendra el bucle
        {
            printf("\nIngrese el número %d: ", I);//Se imprime por consola el mensaje

            scanf("%d", &NUM);//se lee dato ingrasado por pantalla y almacenado den la variable "NUM"

            if (NUM) //Condicionante

                if (pow(-1, NUM) > 0)
                    SPA = SPA + NUM;
                else // de lo contrario
                {
                    SIM = SIM + NUM;
                    CIM++;
                }
        }
        printf("\n La suma de los números pares es: %d", SPA);//Se imprime en consola el mensaje y el valor de la variable "SPA"

        printf("\n El promedio de números impares es: %5.2f", (float)(SIM / CIM));//Se imprime en consola el mensaje y el valor de la variable "SIM"
    }
    else
        printf("\n El valor de N es incorrecto");//Se imprime por consola el mensaje

 //Fin del programma
}
