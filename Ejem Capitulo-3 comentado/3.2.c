#include <stdio.h>// Libreria a utilizar
/* Suma positivos.
El programa, al recibir como datos N números enteros, obtiene la suma de los
➥enteros positivos.
I, N, NUM, SUM: variables de tipo entero. */

void main(void)// funcion principla
{
    int I, N, NUM, SUM;// declaracion de la variable "I, N, NUM, SUM" como entera.

    SUM = 0;    // Agregandole a la variable 'SUM" el valor de 0;

    printf("Ingrese el número de datos:\t");//Se imprime por consola el mensaje

    scanf("%d", &N);         //se lee dato ingrasado por pantalla y almacenado en la variable "N"

    for (I = 1; I <= N; I++)// creacion de bucle, mientras la variable "I" sea menor o igual a la variable "N" se matendra el bucle
    {
        printf("Ingrese el dato número %d:\t", I);  //Se imprime por consola el mensaje

        scanf("%d", &NUM);  //se lee dato ingrasado por pantalla y almacenado den la variable "NUM"

        if (NUM > 0)    //se crea una condicionante, si en "NUM" es mayor a 0

            SUM = SUM + NUM;
    }
    printf("\nLa suma de los números positivos es: %d", SUM);//Se imprime en consola el mensaje y el valor de la variable "SUM"

    //Fin del programma
}
