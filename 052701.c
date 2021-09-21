#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    char a,b,c;
    int x,y,z,max;
    scanf("%c %c %c",&a,&b,&c);
    x=(int)a;
    y=(int)b;
    z=(int)c;
    a=a>b?a:b;
    max=c>a?c:a;
    printf("%c",max);
    return 0;
}
