#include <stdio.h>

/* Aplicacion de operadores */
void main (void)
{
    int i = 15, j ,k,l;
    j = (15 > i --) >(14 <++i);
    printf("\n El valor de j es: %d", j);

    k = ! ('b' != 'd')>(!i - 1);
    printf("\n El valor de k es: %d", k);

    l = (! (34 > (70%2)) || 0);
    printf("\n El valor de 1 es: %d",l);
}
