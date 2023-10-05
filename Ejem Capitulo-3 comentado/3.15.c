#include <stdio.h>// Libreria a utilizar
#include <math.h>
/* Cálculo de P.
El programa obtiene el valor de P aplicando una serie determinada.
I, B, C: variables de tipo entero.
RES: variable de tipo real de doble precisión. */

void main(void)// funcion principaL
{
    int I = 1, B = 0, C; // declaracion de la variable "I, B y C" como entera.

    double RES;
    RES = 4.0 / I; //igualando la variable "RES" a 4 dividivo entre "I"
    C = 1;
    while ((fabs(3.1415 - RES)) > 0.0005) //Creacion del bucle
    {
        I += 2;
        if (B) //condiionando a la variable "B"
        {
            RES += (double)(4.0 / I);
            B = 0;
        }
        else // de lo contrario
        {
            RES -= (double)(4.0 / I);
            B = 1;
        }
        C++; // se le suma 1 a la variable "C"
    }
    printf("\nNúmero de términos:%d", C);//Se imprime en consola el mensaje y el valor de la variable "C"

    //Fin del programma
}
