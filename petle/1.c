
#include <stdio.h>
#include <math.h>

int main()
{
    int x = 1, i = 1;
    while (x <= 2010) {
printf("%d\n", x);
x = pow(2, i);
++i;
    }
    return 0;
}
