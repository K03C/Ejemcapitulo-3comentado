#include <stdio.h> // Libreria a utilizar
/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
➥nómina de la universidad.
I: variable de tipo entero.
SAL y NOM: variables de tipo real. */
void main(void) // funcion principla
{
    int I;  // declaracion de la variable "I" como entera.

    float SAL, NOM; //declaracion de la variable "SAL y NOM" como flotante.

    NOM = 0;        // Agregandole a la variable 'NOM" el valor de 0;

    for (I = 1; I <= 15; I++) // creacion de bucle, mientras la variable "I" sea menor o igual a 15 se matendra el bucle
    {
        printf("\nIngrese el salario del profesor%d:\t", I); //Se imprime por consola el mensaje

        scanf("%f", &SAL);          //se lee dato ingrasado por pantalla y almacenado den la variable "SAL"

        NOM = NOM + SAL;                // Se igualara la variable "NOM" a la suma de "NOM" y "SAL"
    }
    printf("\nEl total de la nómina es: %.2f", NOM); //Se imprime en consola el mensaje y el valor de la variable "NOM"

    //Fin del programma
}
