

#include <stdio.h>

int main()
 {
  int a,b,i,c;

  printf("podaj dwie liczby rzeczywiste, z ktorych pierwsza jest wieksza: \n");
  scanf("%d %d",&a, &b);

  while (b > a) {
    printf("Pierwsza liczba jest mniejsza. Podaj liczby tak, aby pierwsza byla wieksza: \n");
    scanf("%d%d", &a, &b);
  }
  
  c = a - b;

  for(i = 1; i < c; i++)
   {
    a = a - 1;
    printf("\n %d\n", a);
   }
return 0;
}
