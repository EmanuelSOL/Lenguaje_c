//Practica 2 Tipos, operadores y expresiones
//SOE_PRACTICA2_EJERCICIO1
//SOLIS OROZCO EMANUEL 00369154
//NUMERO ENTERO A BINARIO
//06-09-23

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    system("CLS");

    printf("Dame un numero: ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Ingresa un numero valido");
        return 1;
    }

    int numBits=0;
    int temp=num;

    while (temp>0)
    {
        temp/=2;
        numBits++;
    }

    int bits[numBits];
    int indice=0;

    while (num>0)
    {
        bits[indice]=num%2;
        num/=2;
        indice++;
    }

    printf("Numero en bits: \n");

    for (int i=indice-1; i>=0; i--)
    {
        printf("|%d|",bits[i]);
    }
    printf("\n");

    int bit_encendido = -1;

    printf("Los bits encendidos estan en la posicion: \n");
    for (int i=0; i<indice; i++)
    {
        if(bits[i] ==1)
        {
            bit_encendido=i;
            printf("%d, ", bit_encendido+1);
        }
    }
    if (bit_encendido == -1) 
    {
    printf("No se encontraro ningun bit encendido");
    }


    return 0;
}