#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    char n;
    scanf("%c",&n);
    if(97<=n)
    {
        printf("%d",n-96);
    }
    else printf("%d",n-64);
    return 0;
}
