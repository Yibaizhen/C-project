#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv)
{
    long f1, f2, t;
    int i, n;
    scanf("%d", &n);
    f1 = f2 = 1;
    for (i = 3; i <= n; i++)
    {
        t = f1;
        f1 = f2;
        f2 = t + f2;
    }
    printf("%d", f2);
    return 0;
}