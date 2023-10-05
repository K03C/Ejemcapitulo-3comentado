#include <stdio.h>  // Libreria a utilizar

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el último mes.
PAG y SPA: variables de tipo real.*/

void main(void)// funcion principla
{
    float PAG, SPA = 0;// declaracion de la variable "PAG y SPA" como flotante.

    printf("Ingrese el primer pago:\t"); //Se imprime por consola el mensaje

    scanf("%f", &PAG); //se lee dato ingrasado por pantalla y almacenado den la variable "PAG"

    /* Observa que al utilizar la estructura do-while al menos se necesita un pago.*/
    do
    {
        SPA = SPA + PAG;// Se igualara la variable "SPA" a la suma de "SPA" y "PAG"

        printf("Ingrese el siguiente pago -0 para terminar-:\t ");//Se imprime por consola el mensaje

        scanf("%f", &PAG); //se lee dato ingrasado por pantalla y almacenado den la variable "SAL"

    } while (PAG != 0); //COndicion del DO-WHILE
    printf("\nEl total de pagos del mes es: %.2f", SPA);//Se imprime en consola el mensaje y el valor de la variable "NOM"

     //Fin del programma
}
