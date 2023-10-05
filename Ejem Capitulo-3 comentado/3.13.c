#include <stdio.h>// Libreria a utilizar
/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */
void main(void)// funcion principaL
{
    int I, PRI = 0, SEG = 1, SIG;// declaracion de las variables como entera.

    printf("\t %d \t %d", PRI, SEG); //Se imprime por consola el mensaje con el valor de la variable PRI y SEG

    for (I = 3; I <= 50; I++)// creacion de bucle, mientras la variable "I" sea menor o igual 50 se mantendra
    {
        SIG = PRI + SEG;            // la variables "SIG" se igualara a la suma de "PRI Y SEG"
        PRI = SEG;
        SEG = SIG;
        printf("\t %d", SIG);//Se imprime en consola el mensaje, el valor de la variable "SIG"
    }
}
