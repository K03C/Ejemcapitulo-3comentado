#include <stdio.h> // Libreria a utilizar
/* Serie.
El programa imprime los términos y obtiene la suma de una determinada serie.
I, SSE y CAM: variable de tipo entero. */
void main(void) // funcion principaL
{
    int I = 2, CAM = 1;  /*declaracion de la variable "I y CAM" como entera, e igualandola en
    2 y 1 respectivamente*/
    long SSE = 0;

    while (I <= 2500)  /* Observa que la condición es verdadera mientras el la variable "I" es menor o igual a 2500. */
    {
        SSE = SSE + I; // La variable "SSE" es igual a la misma variable mas "I"

        printf("\t %d", I);//Se imprime por consola el mensaje
        if (CAM) //Condicinante,
        {
            I += 5;
            CAM--;
        }
        else //de lo contrario se cumple lo siguiente
        {
            I += 3;
            CAM++;
        }
    }
    printf("\nLa suma de la serie es: %ld", SSE);//Se imprime en consola el mensaje y el valor de la variable "SSE"
      //Fin del programma
}
