#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int number,i;
    scanf("%d",&number);
    for(i=2; i<=sqrt(number); i++)
    {
        if(number%i==0);
        break;
    }
    if(i<sqrt(number))
    {
        printf("No");
    }
    else printf("Yes");
    return 0;
}
