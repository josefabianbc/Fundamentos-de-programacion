#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];  // Declaramos un arreglo para almacenar la cadena
    int mayusculas = 0;  // Contador de letras may�sculas
    int minusculas = 0;  // Contador de letras min�sculas

    printf("Ingresa una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);  // Leer la cadena de entrada

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (isalpha(cadena[i])) {  // Comprobar si el car�cter es una letra
            if (isupper(cadena[i])) {
                // Si es una letra may�scula, aumenta el contador de may�sculas
                mayusculas++;
            } else {
                // Si es una letra min�scula, aumenta el contador de min�sculas
                minusculas++;
            }
        }
    }

    printf("Total de letras mayusculas: %d\n", mayusculas);
    printf("Total de letras minusculas: %d\n", minusculas);

    return 0;
}
