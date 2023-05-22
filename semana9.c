#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;

    printf("Ingrese las dimensiones para crear la matriz\n\n");
    printf("Ingrese primero las dimensiones de las filas: ");
    scanf("%d", &filas);
    printf("Ingrese las dimensiones de las columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas]; // Matriz original
    int matrizTranspuesta[columnas][filas]; // Matriz para almacenar la matriz transpuesta

    srand(time(NULL)); // Guardar los numeros aleatorios

    // Generar la matriz original y mostrarla con numeros aleatorios
    printf("Esta es la matriz transpuesta:\n");
    for (int n = 0; n < filas; n++) {
        for (int m = 0; m < columnas; m++) {
            matriz[n][m] = rand() % 101; // Asignamos el valor aleatorio de 0 a 100 a cada elemento de la matriz

            printf("%d ", matriz[n][m]);
        }
        printf("\n");
    }

    // Obtener la matriz transpuesta
    for (int n = 0; n < filas; n++) {
        for (int m = 0; m < columnas; m++) {
            matrizTranspuesta[m][n] = matriz[n][m]; // Intercambiamos filas y columnas para obtener la matriz transpuesta
        }
    }

    // Mostrar la matriz transpuesta
    printf("\nAqui esta la matriz original:\n");
    for (int n = 0; n < columnas; n++) {
        for (int m = 0; m < filas; m++) {
            printf("%d ", matrizTranspuesta[n][m]);
        }
        printf("\n");
    }

    return 0;
}
