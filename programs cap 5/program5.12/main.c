#include <stdio.h>
/* Ordenación por inserción directa. */
const int MAX = 100;
void Lectura(int *, int);
void Ordena(int *, int); /* Prototipos de funciones. */
void Imprime(int *, int);
void main(void)
{
int TAM, VEC[MAX];
do
{
printf("Ingrese el tamaño del arreglo: ");
scanf("%d", &TAM);
}
while (TAM>MAX || TAM<1);
Lectura(VEC, TAM);
Ordena(VEC, TAM);
Imprime(VEC, TAM);
}
void Lectura(int A[], int T)
{
int I;
for (I=0; I<T; I++)
{
printf("Ingrese el elemento %d: ", I + 1);
scanf("%d", &A[I]);
}
}
void Imprime(int A[], int T)
{
int I;
for (I=0; I<T; I++)
printf("\nA[%d]: %d", I, A[I]);
}
