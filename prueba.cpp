#include <stdio.h>

int main() {
   int num1, num2, num3, sum;
   
   printf("Introduce el primer número: ");
   scanf("%d", &num1);
   
   printf("Introduce el segundo número: ");
   scanf("%d", &num2);
   
   printf("Introduce el tercer número: ");
   scanf("%d", &num3);
   
   sum = num1 + num2 + num3;
   printf("La suma de los tres números es: %d", sum);
   
   return 0;
}