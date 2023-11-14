#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];  // Declaramos un arreglo para almacenar la cadena
    int mayusculas = 0;  // Contador de letras mayúsculas
    int minusculas = 0;  // Contador de letras minúsculas

    printf("Ingresa una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);  // Leer la cadena de entrada

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (isalpha(cadena[i])) {  // Comprobar si el carácter es una letra
            if (isupper(cadena[i])) {
                // Si es una letra mayúscula, aumenta el contador de mayúsculas
                mayusculas++;
            } else {
                // Si es una letra minúscula, aumenta el contador de minúsculas
                minusculas++;
            }
        }
    }

    printf("Total de letras mayusculas: %d\n", mayusculas);
    printf("Total de letras minusculas: %d\n", minusculas);

    return 0;
}
