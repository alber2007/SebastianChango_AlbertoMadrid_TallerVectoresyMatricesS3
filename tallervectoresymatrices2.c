#include <stdio.h>

int main()
{
    int estudiantes[3][5];
    int n = 0;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Estudiante %d", n = n + 1);

            do {
                printf("\nCalculo\nIngrese la Calificacion: ");
                scanf("%d", &estudiantes[i][j]);
            } while (estudiantes[i][j] < 0 || estudiantes[i][j] > 10);
        }
    }

    n = 0;

    for (int i = 1; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Estudiante %d", n = n + 1);

            do {
                printf("\nFisica\nIngrese la Calificacion: ");
                scanf("%d", &estudiantes[i][j]);
            } while (estudiantes[i][j] < 0 || estudiantes[i][j] > 10);
        }
    }

    return 0;
}