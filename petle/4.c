
#include <stdio.h>
#include <math.h>

int main()
 {
   int a = 1, b = 0;
   int n, i, suma;

   printf("Podaj liczbe naturalna wieksza niz 1: \n");
  scanf("%d",&n);

  if(n < 1)
    {
      while (n < 1) {
printf("Blad: liczba mniejsza niz '1'\n Podaj liczbe wieksza niz 1: \n");
  scanf("%d", &n);
      }
     }
 
  for(i = 0; i <= n; i++)
   {
    
     i = i + a;
     b = b + i;
   }

  suma = b + a;
  printf("suma kolejnych liczb od 1 do %d wynosi %d\n", n, suma);
  
return 0;
}
