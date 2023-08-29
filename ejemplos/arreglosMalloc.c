#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamanio; // Tamaño del arreglo
    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &tamanio);
    } while (tamanio <= 0);

    int* arreglo = (int*)malloc(tamanio * sizeof(int)); // Asignamos memoria para el arreglo

    if (arreglo == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1; // Salida con error
    }

    // Inicialización del arreglo con algunos valores
    for (int i = 0; i < tamanio; i++) {
        arreglo[i] = i * 10;
    }

    // Acceso e impresión de los valores del arreglo
    printf("Valores del arreglo:\n");
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    // Liberar la memoria asignada con malloc
    free(arreglo);

    return 0;
}
