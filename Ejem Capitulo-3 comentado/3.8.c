#include <stdio.h> // Libreria a utilizar

/* Factorial.
El programa calcula el factorial de un número entero.
FAC, I, NUM: variables de tipo entero. */

void main(void)// funcion principaL
{
    int I, NUM;// declaracion de la variable "I y NUM" como entera.

    long FAC;// declaracion de la variable "I y NUM" como entera.

    printf("\nIngrese el número: ");//Se imprime por consola el mensaje

    scanf("%d", &NUM);//se lee dato ingrasado por pantalla y almacenado den la variable "NUM"

    if (NUM >= 0)   // condicionante, Cuando "NUM" sea mayor o igual a cero se cumplira
    {
        FAC = 1;
        for (I = 1; I <= NUM; I++)  // creacion de bucle, mientras la variable "I" sea menor o igual a 15 se matendra el bucle
            FAC *= I;
        printf("\nEl factorial de %d es: %ld", NUM, FAC);//Se imprime en consola el mensaje y el valor de la variable "NUM y FAC"
    }
    else
        printf("\nError en el dato ingresado"); //De lo contrario se imprimira en consola el mensaje.
}
