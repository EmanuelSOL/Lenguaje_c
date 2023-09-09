// SOE
// 
// Solis Orozco Emanuel

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int inicio();
void menu();

void adivinanza(void);
void salida2(void);

int main()
{
    menu();
    return 0;
}

int inicio()
{
    int op;
    printf("MENU \n");
    printf(" \n");
    printf("1.- Adivinanza \n");
    printf("Presione 0 para salir\n");
    printf("Selecciona una opcion: ");
    scanf("%d",&op);
    return op;
}

void menu()
{
    int op;
    while (op != 0);
    {
        switch(op)
        {
            case 1:
                adivinanza();
                break;

            case 2:
                salida2();
                break;

        }
    }
}
void adivinanza(void)
{
    int num,i;
    int numeros[100];
    int intentos = 0;
    int aciertos =0;
    srand(time(NULL));

    for (i=0; i<100;i++)//aqui se crea el numero aleatorio entre 1-100
    {
        numeros[i]=rand()%100+1;

    }
    while (aciertos<100)
    {
        printf("ACIERTA EL NUMERO: ");
        scanf("%d",&num);
        intentos++;

        for (i = 0; i < 100; i++)
        {
            if (numeros[i]==intentos)
            {
                printf("Felicidades adivinaste el numero ");
                aciertos++;
                system("pause");

            }
            
        }
        
    }
}