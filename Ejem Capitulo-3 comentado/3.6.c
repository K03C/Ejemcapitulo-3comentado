#include <stdio.h>// Libreria a utilizar

/* Nómina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
➥universidad, obtiene la nómina y el promedio de los salarios.
I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

void main(void) // funcion principla
{
    int I = 0;  // declaracion de la variable "I" como entera.

    float SAL, PRO, NOM = 0;//declaracion de la variable "SAL, PRO y NOM" como flotante.

    printf("Ingrese el salario del profesor:\t");   //Se imprime por consola el mensaje

    /* Observa que al menos se necesita ingresar el salario de un profesor para que
    ➥no ocurra un error de ejecución del programa. */

    scanf("%f", &SAL);//se lee dato ingrasado por pantalla y almacenado den la variable "SAL"
    do
    {
        NOM = NOM + SAL;    // Se igualara la variable "NOM" a la suma de "NOM" y "SAL"

        I = I + 1;
        printf("Ingrese el salario del profesor -0 para terminar- :\t");//Se imprime por consola el mensaje

        scanf("%f", &SAL);//se lee dato ingrasado por pantalla y almacenado den la variable "SAL"
    } while (SAL != 0);//Condicion del DO-WHILE
    PRO = NOM / I;
    printf("\nNómina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);//Se imprime en consola el mensaje y el valor de la variable "NOM y PRO"
}
