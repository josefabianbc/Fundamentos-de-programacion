#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    typedef struct st
    {
        int n1;
        char numero[1000000];
    }st1;



    printf("\nGestion dinamica de la memoria");
    printf("\nCuantas unidades de memoria necesitas?");
    int cantidad = 0;
    scanf("%d",&cantidad);



    //malloc devuelve un puntero tipo void apunta a cualquier cosa
    //hacer cast al tipo deseado
    int *ptrNumero = (int *) malloc(cantidad * sizeof(int));//devuelve el puntero los byte
    st1 *ptrSt = (st1 *) malloc(cantidad * sizeof(st1));
    printf("\nDimension en byte de int: %d",sizeof(int));
    printf("\nDimension en byte de struct st: %d",sizeof(st1));



    if(ptrNumero == NULL || ptrSt == NULL)
    {
        printf("\n\n\nMemoria no disponible\n\n\n");
        return 100;



    }else
    {
        int i = 0;
        char str[100];
        //escribe la memoria
        for(i = 0; i< cantidad;i++)
        {
           ptrNumero[i] = i;
           ptrSt[i].n1 = i;
           itoa(i,str,10);
           strcpy(ptrSt[i].numero, str);
        }



        //lee la memoria
        for(i = 0; i< cantidad;i++)
        {
            printf("\nptrNumero[%d]: %d",i,ptrNumero[i]);
            printf("\n\nptrSt[%d].n1 = %d",i,ptrSt[i].n1);
            printf("\nptrSt[%d].numero = %s",i,ptrSt[i].numero);



        }




    }



    free(ptrNumero);
    free(ptrSt);
    return 0;
}
