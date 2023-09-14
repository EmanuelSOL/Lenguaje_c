// Practica3_Adivinanza_SolisOrozco_Emanuel
// Solis Orozco Emanuel
// 10/09/23--12/09/23
//Un programa que genera un numero aleatorio y lo tienes que adivinar


#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));//genera una semilla
    int num,numRand,op;
    int intentos = 0;
    numRand = (rand() % 101);//genera un numero aleatorio del 1-100

    inicio://Es el primer mensaje con las instrucciones del juego
    system("CLS");
    printf("INICIO\n");
    printf("Para ganar tienes que adivinar el numero que se genera entre 1-100 \n");
    printf("Si tu intento es incorrecto tendras oportunidades hasta que lo aciertes\n");
    printf("Se te ayudara diciendo si tu numero estuvo por debajo o si fue mayor que el numero a adivinar\n");
    system("PAUSE");

    adivinanza://Aqui el usuario ingresa el numero 
    system("CLS");
    printf("ADIVINA EL NUMERO \n");
    printf("Dame un numero del 1-100: ");
    scanf("%d",&num);
    intentos++;

    if (num<1 || num>100)//si el numero no esta en los valores dentro del 1-100 sale un mensaje de error
    {
        printf("EL numero debe estar en el rango de 1-100:\n");
        system("PAUSE");
        goto adivinanza;//Como no puso un numero valido se regresa a preguntarle un numero
    }
    else
    {
        if (num<numRand)//si el numero es menor del numero random sale un mensaje con el tecto de que es menor
        {
            printf("Tu numero esta por debajo del numero a adivinar:\n");
            system("PAUSE");
            goto adivinanza;
        }
        else
        {
            if (num>numRand)//si el numero es mal alto que el numero generado sale este mensaje que esta por encima del numero random
            {
                printf("Tu numero esta por encima del numero a adivinar\n");
                system("PAUSE");
                goto adivinanza;
            }
            else
            {
                printf("Felicidades acertaste el numero: %d en %d intentos \n",numRand,intentos);//Si el usuario acerto sale este mensaje 
                system("PAUSE");
                goto reinicio;
            }

        }

    }

    reinicio://aqui se pregunta si el usuario quiere jugar otra vez
    printf("Deseas jugar de nuevo?\n");
    printf("1.- Si\n");
    printf("2.- No\n");
    scanf("%d",&op);


    switch (op)
    {
        case 1://si si quiere jugar otra vez se reinicia el numero de intentos y genera un nuevo numero random
            numRand = (rand() % 101);
            intentos = 0;
            goto adivinanza;

            break;

        case 2:
            printf("Gracias por jugar, Adios\n");
            return 0;

        default://si el usuario no selecciona 1 ni 2 vuelve a preguntar si quiere jugar 
            goto reinicio;
            break;
    }



}
