#include <stdio.h>
 
int main()
{
    int c, nsp, ntab, nline;
    nsp = ntab = nline = 0;
 
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nsp;
        } else if (c == '\t') {
            ++ntab;
        } else if (c == '\n') {
            ++nline;
        }
        printf("Liczba znakow odstepu: %d.\nLiczba znakow tabulacji: %d.\nLiczba znakow nowej linii: %d.\n",
             nsp, ntab, nline);
    }
    return 0;
}
