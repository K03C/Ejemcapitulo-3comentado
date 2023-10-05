#include <stdio.h> // Libreria a utilizar
/* Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el último
➥mes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */

void main(void) // funcion principla
{
    float PAG, SPA; //declaracion de la variable "PAG y SPA" como flotante.

    SPA = 0;        // Agregandole a la variable 'SPA" el valor de 0;

    printf("Ingrese el primer pago:\t");//Se imprime por consola el mensaje

    scanf("%f", &PAG);//se lee dato ingrasado por pantalla y almacenado den la variable "PAG"

    while (PAG != 0)
    /* Observa que la condición es verdadera mientras el pago es diferente de cero. */
    {
        SPA = SPA + PAG;   // Se igualara la variable "SPA" a la suma de "SPA" y "PAG"
        printf("Ingrese el siguiente pago:\t ");
        scanf("%f", &PAG);
        /* Observa que la proposición que modifica la condición es una lectura. */
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA); //Se imprime en consola el mensaje y el valor de la variable "SPA".

     //Fin del programma
}
