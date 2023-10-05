#include <stdio.h> // Libreria a utilizar
#include <math.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
➥cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void) // funcion principal
{
    int NUM;// declaracion de la variable "NUM" como entera.

    long CUA, SUC = 0; // declaracion de la variable "CUA y SUC" como entero grande.

    printf("\nIngrese un número entero -0 para terminar-:\t"); //Se imprime por consola el mensaje

    scanf("%d", &NUM);//se lee dato ingrasado por pantalla y almacenado den la variable "NUM"

    while (NUM != 0)
    /* Observa que la condición es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow(NUM, 2); // la variable "CUA" sera igual a a la misma variable elevada al cuadrado

        printf("%d al cubo es %ld", NUM, CUA); //Se imprime por consola el mensaje

        SUC = SUC + CUA;
        printf("\nIngrese un número entero -0 para terminar-:\t");//Se imprime por consola el mensaje
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);//Se imprime en consola el mensaje y el valor de la variable "SUC"
        //Fin del programma
}
