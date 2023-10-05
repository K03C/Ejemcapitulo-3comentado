#include <stdio.h>// Libreria a utilizar
/* Elección.
El programa obtiene el total de votos de cada candidato y el porcentaje
➥correspondiente. También considera votos nulos.
VOT, C1, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real.*/

void main(void)// funcion principaL
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;  // declaracion de laS variableS como entera.

    float PO1, PO2, PO3, PO4, PO5, PON; // declaracion de las variables como flotante.

    printf("Ingrese el primer voto:"); //Se imprime por consola el mensaje

    scanf("%d", &VOT);//se lee dato ingrasado por pantalla y almacenado den la variable "VOT"

    while (VOT) //Se crea un bulce, con la variable "VOT"
    {
        switch (VOT)    //Se crea un condicionante de  casos, con la variable "VOT"
        {
        case 1: //caso si es 1
            C1++;
            break;
        case 2: //caso si es 2
            C2++;
            break;
        case 3: //caso si es 3
            C3++;
            break;
        case 4: //caso si es 4
            C4++;
            break;
        case 5: //caso si es 5
            C5++;
            break;
        default: // si no es ninguna
            NU++;
            break;
        }

        printf("Ingrese el siguiente voto -0 para terminar: "); //Se imprime por consola el mensaje
        scanf("%d", &VOT); //se lee dato ingrasado por pantalla y almacenado den la variable "VOT"
    }

    // Se realiza una serie de operaciones para obtener el resultado del porcentaje d elos votantes
    SVO = C1 + C2 + C3 + C4 + C5 + NU;
    PO1 = ((float)C1 / SVO) * 100;
    PO2 = ((float)C2 / SVO) * 100;
    PO3 = ((float)C3 / SVO) * 100;
    PO4 = ((float)C4 / SVO) * 100;
    PO5 = ((float)C5 / SVO) * 100;
    PON = ((float)NU / SVO) * 100;

    //se imprimira la cantidad de votos de cada uno de los candidatos imprimiendo el alor de las variables
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);

     //Fin del programma
}
