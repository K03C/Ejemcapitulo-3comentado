#include <stdio.h>// Libreria a utilizar

/* Examen de admisión.
El programa, al recibir como datos una serie de calificaciones de un examen,
➥obtiene el rango en que se encuentran éstas.
R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */

void main(void)// funcion principaL
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;// declaracion de las variables como entera.

    float CAL;// declaracion de las variables como flotante.

    printf("Ingresa la calificación del alumno: ");//Se imprime por consola el mensaje

    scanf("%f", &CAL);//se lee dato ingrasado por pantalla y almacenado den la variable "CAL"

    while (CAL != -1)// Mientras "CAL" sea diferentes a -1 se repetira
    {
        if (CAL < 4)// codicionante
            R1++;
        else if (CAL < 6) //si no
            R2++;
        else if (CAL < 8)
            R3++;
        else if (CAL < 9)
            R4++;
        else // de lo contracio
            R5++;
        printf("Ingresa la calificación del alumno: "); //Se imprime por consola el mensaje
        scanf("%f", &CAL);//se lee dato ingrasado por pantalla y almacenado den la variable "CAL"
    }
    printf("\n0..3.99 = %d", R1);//Se imprime por consola el mensaje y el valor de la variable "R1"
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10 = %d", R5);

    //Fin de programa
}
