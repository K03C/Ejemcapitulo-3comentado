#include <stdio.h>// Libreria a utilizar
/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor
y peor promedio.
I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

void main(void)// funcion principaL
{
    int I, MAT, MAMAT, MEMAT;    // declaracion de las variables como entera.

    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // declaracion de las variables como flotante y asignaod algunos valores.
    printf("Ingrese la matrícula del primer alumno:\t");//Se imprime por consola el mensaje
    scanf("%d", &MAT);//se lee dato ingrasado por pantalla y almacenado den la variable "MAT"

    while (MAT)/* Observa que la condición es verdadera mientras "MAT" */
    {
        SUM = 0;// igualara la varibale "SUM" a cero
        for (I = 1; I <= 5; I++)// creacion de bucle, mientras la variable "I" sea menor o igual a 5 se matendra el bucle
        {
            printf("\tIngrese la calificación del alumno: ", I);//Se imprime por consola el mensaje
            scanf("%f", &CAL);//se lee dato ingrasado por pantalla y almacenado den la variable "CAL"
            SUM += CAL;
        }
        //Cuanod se termine el bucle FOR se igualara a "PRO" la variable "SUM" y se divide entre 5
        PRO = SUM / 5;
        printf("\nMatrícula:%d\tPromedio:%5.2f", MAT, PRO);//Se imprime por consola el mensaje
        if (PRO > MAPRO)// condicionante, //si "PRO" es mayor a "MAPRO" se cumple
        {
            MAPRO = PRO;
            MAMAT = MAT;
        }
        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;
        }
        printf("\n\nIngrese la matrícula del siguiente alumno: "); //Se imprime por consola el mensaje
        scanf("%d", &MAT);
    }
    printf("\n\nAlumno con mejor Promedio:\t%d\t\t%5.2f", MAMAT, MAPRO);//Se imprime en consola el mensaje y el valor de la variable "MAMAT y MAPRO"
    printf("\n\nAlumno con peor Promedio:\t%d\t\t%5.2f", MEMAT, MEPRO);//Se imprime en consola el mensaje y el valor de la variable "MAMAT y MAPRO"


    //Fin del programma
}
