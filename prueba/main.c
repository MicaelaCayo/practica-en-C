#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion1;
    int opcion2;
    int opcion3;
    int opcion4;
    int opcion5;
    int estado = 5;

    printf("***************************************************************\n");
    printf("                    PROGRAMA DE PRUEBA\n");
    printf("***************************************************************\n");
    printf("                  Que deberia jugar hoy?\n");
    printf("***************************************************************\n\n");

    printf("A- Como te sentis hoy?\n\n 1 = Me siento bien | 2 = Me siento mal\n\n");
    printf("Ingrese una opcion (1 o 2)....");
    scanf("%d",&opcion1);
    while(opcion1!=1 && opcion1!=2)
    {
        printf("ERROR! Ingrese una opcion correcta (1 o 2)....");
        scanf("%d",&opcion1);
    }
    if (opcion1==2)
    {
        estado--;
    }

    printf("\n\n");
    printf("B- Tenes ganas de comer algun dulce?\n\n 1 = Si | 2 = No\n\n");
    printf("Ingrese una opcion (1 o 2)....");
    scanf("%d",&opcion2);
        while(opcion2!=1 && opcion2!=2)
    {
        printf("ERROR! Ingrese una opcion correcta (1 o 2)....");
        scanf("%d",&opcion2);
    }
    if (opcion2==1)
    {
        estado--;
    }

    printf("\n\n");
    printf("C- En la semana estuviste llorando?\n\n 1 = Si | 2 = No\n\n");
    printf("Ingrese una opcion (1 o 2)....");
    scanf("%d",&opcion3);
        while(opcion3!=1 && opcion3!=2)
    {
        printf("ERROR! Ingrese una opcion correcta (1 o 2)....");
        scanf("%d",&opcion3);
    }
    if (opcion3==1)
    {
        estado--;
    }

    printf("\n\n");
    printf("D- Dormiste bien estos dias?\n\n 1 = Si | 2 = No\n\n");
    printf("Ingrese una opcion (1 o 2)....");
    scanf("%d",&opcion4);
    while(opcion4!=1 && opcion4!=2)
    {
        printf("ERROR! Ingrese una opcion correcta (1 o 2)....");
        scanf("%d",&opcion4);
    }
    if (opcion4==2)
    {
        estado--;
    }

    printf("\n\n");
    printf("E- Te sentis con ganas de golpear gente?\n\n 1 = Si | 2 = No\n\n");
    printf("Ingrese una opcion (1 o 2)....");
    scanf("%d",&opcion5);
    while(opcion5!=1 && opcion5!=2)
    {
        printf("ERROR! Ingrese una opcion correcta (1 o 2)....");
        scanf("%d",&opcion5);
    }
    if (opcion5==1)
    {
        estado--;
    }

    printf("----------------------------------------------------------\n");
    printf("--------------------- RESULTADO --------------------------\n");
    printf("----------------------------------------------------------\n\n");
    if(estado<3)
    {
        printf("ESTAS MUY TRISTE FLACA! Anda a mirar anime o una pelicula mejor...\n\n\n");
    }else{
        if (estado==3)
            printf("ESTAS MEHHHHH, mejor juguemos unas partidas de PUBG para ver si sentir mejor o peor...\n\n\n");
        else{
            printf("EL DIA Y TU HUMOR ESTA TAN HERMOSO COMO EL APEX MOBILE! uwu Yendo no, llegandooooo \n\n\n");
        }
    }
    return 0;
}
