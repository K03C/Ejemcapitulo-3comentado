#include <stdio.h>// Libreria a utilizar
/* N�meros perfectos.
El programa, al recibir como dato un n�mero entero positivo como l�mite, obtiene
los n�meros perfectos que hay entre 1 y ese n�mero, y adem�s imprime cu�ntos n�meros perfectos hay en el intervalo.
I, J, NUM, SUM, C: variables de tipo entero. */

void main(void)// funcion principaL
{
    int I, J, NUM, SUM, C = 0; // declaracion de laS variableS como entera.

    printf("\nIngrese el n�mero l�mite: ");//Se imprime por consola el mensaje

    scanf("%d", &NUM); //se lee dato ingrasado por pantalla y almacenado den la variable "SAL"

    for (I = 1; I <= NUM; I++)// creacion de bucle, mientras la variable "I" sea menor o igual a la variable "NUM" se matendra el bucle
    {
        SUM = 0; // Se igualara la variable "SUM" a 0

        for (J = 1; J <= (I / 2); J++)// creacion de bucle, mientras la variable "J" sea menor o igual a la division de I entre 2
            if ((I % J) == 0)// condicionante se cumple
                SUM += J;
        if (SUM == I) //otro condicionante si se cumple s eimprime en consola
        {
            printf("\n%d es un n�mero perfecto", I);
            C++;
        }
    }
    printf("\nEntre 1 y %d hay %d n�meros perfectos", NUM, C);//Se imprime en consola el mensaje y el valor de la variable "NUM y C"
        //Fin del programma
}
