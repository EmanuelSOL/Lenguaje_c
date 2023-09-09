//Practica 2 Tipos, operadores y expresiones
//SOE_PRACTICA2_EJERCICIO2
//SOLIS OROZCO EMANUEL 00369154
//Calif en letra
//06-09-23

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main ()
{
    float calif;
    printf("Dame la calificacion del 0-100: ");
    scanf("%f", &calif);

    printf("El promedio es de: %.2f \n", calif);

    if (calif >= 80)
    {
        if (calif >100)
        {
            printf("Error ");
        }
        else
        {
            if (calif >= 90)
            {
                printf("A");
            }
            else
            {
                printf("B");
            }
            
        }
    } 
    else
    {
        if (calif >= 60)
        {
            if (calif >= 70)
            {
                printf("C");
            }
            else
            {
                printf("D");
            }
        }
        else
        {
            printf("F");
            
        }
    }

    return 0;
}