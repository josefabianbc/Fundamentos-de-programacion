#include <stdio.h>


/* Invierte datos, este programa al recibir como dato un conjuntode datos de entrada, invierte el orden de los mismos
cuando los imprime A,B,C,D: variables de tipo entero */
void main (void)
{
    int A,B,C,D;
    printf("Ingrese cuatro datos de tipo entero: ");
    scanf("%d %d %d %d",&A,&B,&C,&D);
    printf("\n %d %d %d %d",D,C,B,A);
}
