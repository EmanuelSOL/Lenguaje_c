//Practica 1
//SOLIS OROZCO EMANUEL 00369154
//23-08-23


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define pi = 3.1416;

int msg();
int msgcalculadora();
int msgjuego();
int msgcalculararea();

void menu();
void menucalculadora();
void menujuego();
void menuarea();

void suma(void);
void resta(void);
void multiplicacion(void);
void division(void);
void triangulo(void);
void circulo();
void rectangulo(void);
void cubo(void);
void cilindro(void);



int main()
{

    menu();

    return 0;

}

int msg()
{
    int op1;
    system("CLS");
    printf("MENU \n");
    printf("1.- Ir a calculadora \n");
    printf("2.- Ir a juego \n");
    printf("3.- Ir a calculadora de areas \n");
    printf("0.- SALIR  \n");
    scanf("%d", &op1);

    return op1;

    
}

int msgcalculadora()
{
    int op2;
    system("CLS");
    printf("MENU CALCULADORA\n");
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACION\n");
    printf("4.- DIVISION\n");
    printf("0.- SALIR  \n");
    scanf("%d", &op2);

    return op2;


}

int msgjuego()
{
    int op3;
    system("CLS");
    printf("MENU JUEGO \n");
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACION\n");
    printf("3.- DIVISION\n");
    printf("0.- SALIR  \n");
    scanf("%d", &op3);

    return op3;

   
}

int msgcalculararea()
{
    int op4;
    system("CLS");
    printf("MENU CALCULADORA AREA \n");
    printf("1.- AREA DE UN TRIANGULO \n");
    printf("2.- AREA DE UN CIRCULO \n");
    printf("3.- AREA DE UN RECTANGULO \n");
    printf("4.- AREA DE UN CUBO \n");
    printf("5.- AREA DE UN CILINDRO \n");
    printf("0.- SALIR  \n");
    scanf("%d", &op4);

    return op4;
    
}

void menu()
{

    int op1;
    do
    {
        op1 = msg();
        switch (op1)
        {
            case 1:
                menucalculadora();
                break;

            case 2:
                menujuego();
                break;

            case 3:
                menuarea();
                break;
        }

    } 
    while (op1 != 0);

}

void menucalculadora() //si se elige la operacion calculadora sale otro menu con lo que puede hacer la calculadora 
//los gatitos luciran muy lindos vestiditos
{
    int op2;

    do
    {
        op2=msgcalculadora();
        switch (op2)
        {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multiplicacion();
            break;
        case 4:
            division();
            break;
        }

    } 
    while (op2 != 0);
}

void menujuego()//si se elige la operacion juego vendra aqui y aqui se hara el programa
{
    int op3,num,i;
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

void menuarea() //si se elige la operacion area vendra aqui y de aqui se redirigira a la opcion deseada
{
    int op4;
    do
    {
        op4 = msgcalculararea();
        switch (op4)
        {
        case 1:
            triangulo();
            break;

        case 2:
            circulo();
            break;

        case 3:
            rectangulo();
            break;

        case 4:
            cubo();
            break;

        case 5:
            cilindro();
            break;
        }

    }

    while (op4 != 0);
}

void suma(void) //Este es el procedimiento para la suma
{
    int op2,num1,num2,op;

    system("CLS");
    printf("Dame el primer numero ");
    scanf("%d", &num1);

    printf("Dame el segundo numero ");
    scanf("%d", &num2);

    system("CLS");

    op=num1+num2;
    printf("La suma de los numeros es: %d ",op);

    printf(" \n");
    system("pause");

    
}

void resta(void)//procedimiento para ;a resta
{
    int op2,num1,num2,op;

    system("CLS");
    printf("Dame el primer numero ");
    scanf("%d", &num1);

    printf("Dame el segundo numero ");
    scanf("%d", &num2);

    system("CLS");

    op=num1-num2;
    printf("La resta de los numeros es: %d ",op);

    printf(" \n");
    system("pause");

}

void multiplicacion(void)//procedimiento para la multiplicacion
{
    int op2,num1,num2,op;

    system("CLS");
    printf("Dame el primer numero ");
    scanf("%d", &num1);

    printf("Dame el segundo numero ");
    scanf("%d", &num2);

    system("CLS");

    op=num1*num2;
    printf("La multiplicacion de los numeros es: %d ",op);

    printf(" \n");
    system("pause");

}

void division(void)//procedimiento para la division
{
    int op2;
    float op,num1,num2;

    system("CLS");
    printf("Dame el primer numero ");
    scanf("%f", &num1);

    printf("Dame el segundo numero ");
    scanf("%f", &num2);

    system("CLS");

    op = (num1 / num2);
    printf("La division de los numeros es: %f ",op);

    printf(" \n");
    system("pause");

}

void triangulo(void)
{
    int op4,base,altura;
    float op;

    system("CLS");
    printf("Dame la base del triangulo ");
    scanf("%d", &base);

    printf("Dame la altura del triangulo ");
    scanf("%d", &altura);

    system("CLS");

    op = (base*altura)/2;
    printf("El area del triangulo es: %f ",op);

    printf(" \n");
    system("pause");


}

void circulo(void)
{
    int op4,radio;
    float op;

    system("CLS");
    printf("Dame el radio del circulo ");
    scanf("%d", &radio);

    system("CLS");

    op = 3.1416 *(radio * radio);
    printf("El area del circulo es: %f ",op);

    printf(" \n");
    system("pause");

}

void rectangulo(void)
{
    int op4,base,altura,op;

    system("CLS");
    printf("Dame la base del rectangulo ");
    scanf("%d", &base);

    printf("Dame la altura del rectangulo ");
    scanf("%d", &altura);

    system("CLS");

    op = base*altura;
    printf("El area del rrectangulo es: %d ",op);

    printf(" \n");
    system("pause");

}

void cubo(void)
{
    int op4,base;
    float op;

    system("CLS");
    printf("Dame la base del cubo ");
    scanf("%d", &base);

    system("CLS");

    op = 6*(base*base);
    printf("El area del cubo es: %f cm2",op);

    printf(" \n");
    system("pause");

}

void cilindro(void)
{
     int op4,radio,altura;
     float op;

    system("CLS");
    printf("Dame el radio del cilindro ");
    scanf("%d", &radio);

    printf("Dame la altura del cilindro ");
    scanf("%d", &altura);

    system("CLS");

    op = 2*3.1416*radio*(radio + altura);
    printf("El area del cilindro es: %f ",op);

    printf(" \n");
    system("pause");

}