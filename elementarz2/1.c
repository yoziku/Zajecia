#include <stdio.h>
int main()
{
    int M, suma = 0, i = 1;
    printf
        ("\nProgram obliczajacy liczbe n we wzorze 1+2+3+...+n >= M \n");
    printf("Podaj liczbe 'n' :  \n");
    scanf("%d", &M);
    while (suma < M) {
        suma = suma + i;
        i = i + 1;
    }
    printf("\nSzukana liczba 'n' to : %d", i - 1);
    printf(" \n");
    return 0;
}
