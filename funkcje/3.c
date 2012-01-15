#include<stdio.h>

int isPerfect(int n);
void printPerfects();

int main()
{
  int num, p;
  printf("podaj liczbe: ");
 scanf("%d", &num);
 p = isPerfect(num);
 if( p == 1 )
   printf("%d jest doskonała.\n", num);
 else if( p == 2 )
   printf("%d nie jest doskonała.\n", num);
 printPerfects();
 printf("\n");
 return 0;
}

int isPerfect(int n)
{
  int i = 1, sum = 0;

  while( i < n ){
    if( n%i == 0 )
      sum += i;
    i++;
  }
  if( sum == n )
    return 1;
  else
    return 2;
}

void printPerfects()
{
  int n = 1, p;
  printf("liczba doskonała: ");
  for( n = 1 ; n <= 1000 ; n++ ){
    p = isPerfect( n );
    if( p == 1)
      printf("%d ", n);
  }
}
