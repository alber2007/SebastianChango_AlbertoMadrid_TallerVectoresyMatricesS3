#include <stdio.h>

int main()
{
   int estudiantes[3][5];
   int n = 0;

   for (int i = 0; i < 1; i++) {
      for (int j = 0; j < 5; j++) {

         printf("                 Estudiante %d", n = n + 1);
         printf("\n      Calculo\nIngrese la Calificacion: ");
         scanf("%d", &estudiantes[i][j]);
      }
   }

   n = 0;

   for (int i = 1; i < 2; i++) {
      for (int j = 0; j < 5; j++) {

         printf("                 Estudiante %d", n = n + 1);
         printf("\n      Fisica\nIngrese la Calificacion: ");
         scanf("%d", &estudiantes[i][j]);
      }
   }

   n = 0;

   for (int i = 2; i < 3; i++) {
      for (int j = 0; j < 5; j++) {

         printf("                 Estudiante %d", n = n + 1);
         printf("\n      Estadistica\nIngrese la Calificacion: ");
         scanf("%d", &estudiantes[i][j]);
      }
   }

   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 5; j++) {

         printf("%d | ", estudiantes[i][j]);

      }
      printf("\n");
   }

   return 0;
}