#include <stdio.h>

int main()
{
    // w - liczba wierszy; k -liczba kolumn
    void wypisz(int w, int k) {

k*=2;
--k;
int i = 1, j;
while (i <= w) {

if (i % 2 == 0)
printf(" ");

for (j = 0; j < k; j++) {
if (j % 2 == 0)
printf("*");
else
printf(" ");
}

printf("\n");
++i;
}
    }

    wypisz(8, 8);
    return 0;
}
