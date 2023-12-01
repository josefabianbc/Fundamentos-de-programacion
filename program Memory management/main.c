#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    printf("\nGestion dinamica de la memoria");
    printf("\nCuantas unidades de memoria necesitas?");
    int cantidad = 0;
    scanf("%d",&cantidad);



    //malloc devuelve un puntero tipo void apunta a cualquier cosa
    //hacer cast al tipo deseado
    int *ptrNumero = (int *) malloc(cantidad * sizeof(int));//devuelve el puntero los byte



    if(ptrNumero == NULL)
    {
        printf("\nMemoria no disponible");
        return 100;



    }else
    {
        int i = 0;
        //escribe la memoria
        for(i = 0; i< cantidad;i++)
        {
           ptrNumero[i] = i;
        }



        //lee la memoria
        for(i = 0; i< cantidad;i++)
        {
            printf("\nptrNumero[%d]: %d",i,ptrNumero[i]);



        }


    }



    free(ptrNumero);
    return 0;
}
