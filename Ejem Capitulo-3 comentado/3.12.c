#include <stdio.h>// Libreria a utilizar
#include <math.h>
/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
➥la serie de ULAM.
NUM: variable de tipo entero. */

void main(void)// funcion principaL
{
    int NUM;// declaracion de la variable "NUM" como entera.

    printf("Ingresa el número para calcular la serie: ");//Se imprime por consola el mensaje

    scanf("%d", &NUM);//se lee dato ingrasado por pantalla y almacenado den la variable "SAL"
    if (NUM > 0) //condicion, si "NUM" es mayor a 0 se cumple
    {
        printf("\nSerie de ULAM\n");
        printf("%d \t", NUM);
        while (NUM != 1)        //Bucle, si la variable "NUM" ES DIFERENTE A UNO SE REPERITIRA EL PROCESO
        {
            if (pow(-1, NUM) > 0)
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1;
            printf("%d \t", NUM);
        }
    }
    else // De lo contriaro se imprimira el siguiente mensaje
        printf("\n NUM debe ser un entero positivo");

 //Fin del programma
}
