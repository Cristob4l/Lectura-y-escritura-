#include<stdio.h>
#include <stdlib.h>
int fibonacci(int a);
int factorial(int a);
int opcion=0;
char linea[100];



int fibonacci(int n){
  if (n==0 || n==1) {
   
       return n;
    }
      else{
     return (fibonacci(n-1) + fibonacci(n-2));
   }
 }

int factorial(int n){
  if (n == 1) {
    return 1;
      }
      else{
        return (n*factorial(n-1)); 
  }
}

int main(){

  FILE* ArchivoIn=NULL;
  char* archivo = "entrada.txt";
  ArchivoIn = fopen(archivo, "r");
  
  FILE* ResultadoFib =NULL;
  char* ResulFib = "salidafib.txt";
  ResultadoFib = fopen(ResulFib,"wt");

  FILE* ResultadoFac=NULL;
  char* ResulFac = "salidaFac.txt";
  ResultadoFac = fopen(ResulFac, "wt");



  while (opcion!=3) {
      printf("\n --------MENU--------\nSucesión de Fibonacci [1]\nFactorial [2]\nSalir [3]\nopción seleccionada:");
      scanf("%i", &opcion);
  
        if (opcion==1){
          fgets( linea, "%[^\n]", ArchivoIn); 
          int num = atoi(linea); 
          fprintf(ResultadoFib, "\nSecuencia de fibonacci de %i: ", num);
        for (int i = 0; i < num; i++) {
            fprintf(ResultadoFib, "%i, ", fibonacci(i)); 
           } 
        }

        if (opcions == 2){
          fgets(linea, "%[^\n]", ArchivoIn);
          int num2 = atoi(linea); 
          int resultado =  factorial(num2);
          fprintf(ResultadoFac, "\nEl factorial de %i es: %i", num2,resultado) ; 
        }

        if (opcion == 3) {
          fclose(archivo);
          break;
        }
   }  
}

