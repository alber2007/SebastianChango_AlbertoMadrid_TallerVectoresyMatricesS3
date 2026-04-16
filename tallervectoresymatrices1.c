#include <stdio.h>

int main()
{
    int estudiantes[1][5];
    int n = 0;

    for (int j = 0; j < 5; j++) {
        printf("                 Estudiante %d", n = n + 1);
        
        do {
            printf("\n      Calculo\nIngrese la Calificacion: ");
            scanf("%d", &estudiantes[0][j]);
        } while (estudiantes[0][j] < 0 || estudiantes[0][j] > 10);
    }

    printf("\nCalificaciones de Calculo:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d | ", estudiantes[0][j]);
    }

    return 0;
}