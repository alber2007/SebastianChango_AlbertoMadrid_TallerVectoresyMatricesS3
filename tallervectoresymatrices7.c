#include <stdio.h>

int main()
{
   int estudiantes[3][5];
   float p1,p2,p3,p4,p5,cal,fis,est;
   int cont1,cont2,cont3;
   cont1 = 0;
   cont2 = 0;
   cont3 = 0;
   int n = 0;

   for (int i = 0 ; i < 1; i++){
      for (int j = 0 ; j < 5; j++){
      
      printf("                 Estudiante %d", n= n+1);
      do{
      printf("      \n      Calculo\nIngrese la Calificacion: ");
      scanf("%d",&estudiantes[i][j]);
      }while(estudiantes[i][j] < 0 || estudiantes[i][j] > 10);
      
      if(estudiantes[i][j] >= 6){
         cont1++;
      }
      
      }
   }
   
   n = 0;
   
   for (int i = 1 ; i < 2; i++){
      for (int j = 0 ; j < 5; j++){
      
      printf("                 Estudiante %d", n= n+1);
      do{
      printf("      \n      Fisica\nIngrese la Calificacion: ");
      scanf("%d",&estudiantes[i][j]);
      }while(estudiantes[i][j] < 0 || estudiantes[i][j] > 10);
      
      }
   }
      
    n = 0;
    
    for (int i = 2 ; i < 3; i++){
      for (int j = 0 ; j < 5; j++){
      
      printf("                 Estudiante %d", n= n+1);
      do{
      printf("      \n      Estadistica\nIngrese la Calificacion: ");
      scanf("%d",&estudiantes[i][j]);
      }while(estudiantes[i][j] < 0 || estudiantes[i][j] > 10);
      
      }
   }
    
    n = 0;
    
    for (int i = 0 ; i < 3; i++){
      for (int j = 0 ; j < 5; j++){
          
        printf("%d | ",estudiantes[i][j]);
        
      }
      printf("\n");
   }
    
    for (int i = 0 ; i < 3; i++){
      for (int j = 0 ; j < 1; j++){
      
      p1 = p1 + estudiantes[i][j];
      
      }
   }
   p1=p1/3;
   printf ("P.Estudiante 1: %.2f",p1);
   
   for (int i = 0 ; i < 3; i++){
      for (int j = 1 ; j < 2; j++){
      
      p2 = p2 + estudiantes[i][j];
      
      }
   }
   p2=p2/3;
   printf ("\nP.Estudiante 2: %.2f",p2);
   
   for (int i = 0 ; i < 3; i++){
      for (int j = 2 ; j < 3; j++){
      
      p3 = p3 + estudiantes[i][j];
      
      }
   }
   p3=p3/3;
   printf ("\nP.Estudiante 3: %.2f",p3);
   
   for (int i = 0 ; i < 3; i++){
      for (int j = 3 ; j < 4; j++){
      
      p4 = p4 + estudiantes[i][j];
      
      }
   }
   p4=p4/3;
   printf ("\nP.Estudiante 4: %.2f",p4);
   
   for (int i = 0 ; i < 3; i++){
      for (int j = 4 ; j < 5; j++){
      
      p5 = p5 + estudiantes[i][j];
      
      }
   }
   p5=p5/3;
   printf ("\nP.Estudiante 5: %.2f",p5);
   
   for (int i = 0 ; i < 1; i++){
      for (int j = 0 ; j < 5; j++){
      
      cal = cal + estudiantes[i][j];
      
      }
   }
   cal=cal/5;
   printf ("\nP.Calculo: %.2f",cal);
   
   for (int i = 1 ; i < 2; i++){
      for (int j = 0 ; j < 5; j++){
      
      fis = fis + estudiantes[i][j];
      
      }
   }
   fis=fis/5;
   printf ("\nP.Fisica: %.2f",fis);
   
   for (int i = 2 ; i < 3; i++){
      for (int j = 0 ; j < 5; j++){
      
      est = est + estudiantes[i][j];
      
      }
   }
   est=est/5;
   printf ("\nP.Estadistica: %.2f",est);
   
   printf ("\n            Calculo\nAprobados:%d",cont1);
   printf (" Reprobados:%d",(5-cont1));

   est=est/5;
   printf ("\nP.Estadistica: %.2f",est);
   
   

   
   
    return 0;
}